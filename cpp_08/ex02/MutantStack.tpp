/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:21:57 by lamici            #+#    #+#             */
/*   Updated: 2023/11/08 10:40:28 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack(void)
{
	;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy)
{
	;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &copy)
{
	std::stack<T>::operator=(copy);
}

template<typename T>
typename MutantStack<T>::iterator		MutantStack<T>::begin(void)
{
	return(this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator 	MutantStack<T>::begin(void) const
{
	return(this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end(void)
{
	return(this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator 	MutantStack<T>::end(void) const
{
	return(this->c.end());
}

