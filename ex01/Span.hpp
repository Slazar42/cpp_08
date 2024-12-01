/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 00:50:37 by slazar            #+#    #+#             */
/*   Updated: 2024/12/02 00:51:05 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _vec;
public:
	Span(unsigned int n);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	class FullSpanException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NoSpanException : public std::exception
	{
		virtual const char *what() const throw();
	};
};