/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 00:50:37 by slazar            #+#    #+#             */
/*   Updated: 2024/12/02 12:15:12 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <climits>


class Span
{
private:
	unsigned int _n;
	std::vector<int> _v;
public:
	Span(unsigned int n);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	~Span();
	void addNumber(int number);
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