/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:09:03 by slazar            #+#    #+#             */
/*   Updated: 2025/01/18 18:15:11 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &obj) : std::stack<T>(obj) {}
	virtual ~MutantStack() {}
	MutantStack &operator=(const MutantStack &obj)
	{
		if (this == &obj)
			return (*this);
		std::stack<T>::operator=(obj);
		return (*this);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
};