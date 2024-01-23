/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:21:54 by lamici            #+#    #+#             */
/*   Updated: 2023/11/08 10:41:56 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
				MutantStack(void);
				~MutantStack(void);
				MutantStack(const MutantStack &copy);
	MutantStack	&operator=(const MutantStack &copy);
	iterator		begin(void);
	const_iterator 	begin(void) const;
	iterator		end(void);
	const_iterator 	end(void) const;
};

# include "MutantStack.tpp"

#endif