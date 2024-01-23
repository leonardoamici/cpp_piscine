/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:27:00 by lamici            #+#    #+#             */
/*   Updated: 2023/11/22 10:59:18 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int      singleDigit(std::string input, int it)
{
    if (isdigit(input.c_str()[it]) && isspace(input.c_str()[it + 1]) && it == 0)
        return (1);
    if (isdigit(input.c_str()[it]) && !input.c_str()[it + 1] && it == 0)
        return (1);
    if (isdigit(input.c_str()[it]) && isspace(input.c_str()[it - 1]) && \
     (isspace(input.c_str()[it + 1]) || !input.c_str()[it + 1]))
        return (1);
    return (0);
}

static void    doOperation(std::stack<int> &stack, char op)
{
    int a;
    int b;

    if (stack.size() < 2)
        throw (std::exception());
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    
    switch (op)
    {
        case '*':
            stack.push(a * b);
            break ;
        case '+':
            stack.push(a + b);
            break ;
        case '-':
            stack.push(b - a);
            break ;
        case '/':
            if (!a)
                throw (std::exception());
            stack.push(b / a);
            break ;
    }
}

void    printStack(std::stack<int> stack)
{
    if(stack.size() > 1)
    {
        std::stack<int> newStack(stack);
        newStack.pop();
        printStack(newStack);
    }   
    if (stack.size() > 1)
        std::cout << ", ";
    std::cout << stack.top();
}

void    processInput(std::string input)
{
    std::stack<int> Stack;
    int i = 0;

    try
    {
        for (i = 0; input.c_str()[i] && i < (int)input.size(); i++)
        {
            if (isdigit(input.c_str()[i]) && singleDigit(input, i))
                Stack.push(input.c_str()[i] - '0');
            else if (isspace(input.c_str()[i]))
                continue ;
            else if (input.c_str()[i] == '*' || input.c_str()[i] == '-' || input.c_str()[i] == '/' || input.c_str()[i] == '+')
                doOperation(Stack, input.c_str()[i]);
            else
                throw (std::exception());
        }
    }
    catch (std::exception)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    if (input.c_str()[i] == '\0' && !Stack.empty())
        printStack(Stack);
    std::cout << std::endl;
}