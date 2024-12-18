/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:52:11 by slazar            #+#    #+#             */
/*   Updated: 2024/12/03 13:47:09 by slazar           ###   ########.fr       */
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
    for (size_t i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}

const char *Span::FullSpanException::what() const throw()
{
    return "The span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "There is no span to calculate";
}

