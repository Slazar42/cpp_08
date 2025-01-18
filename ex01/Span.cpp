/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:52:11 by slazar            #+#    #+#             */
/*   Updated: 2025/01/18 17:24:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &obj) : _n(obj._n), _v(obj._v) {}

Span::~Span() {}

Span &Span::operator=(const Span &obj)
{
    if (this == &obj)
        return (*this);
    _n = obj._n;
    _v = obj._v;
    return (*this);
}

void Span::addNumber(int n)
{
    if (_v.size() >= _n)
        throw FullSpanException();
    _v.push_back(n);
}

int Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw NoSpanException();
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	int min = INT_MAX;
	for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; it++)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() <= 1)
		throw NoSpanException();
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	return v.back() - v.front();
}

const char *Span::FullSpanException::what() const throw()
{
    return "The span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "There is no span to calculate";
}

