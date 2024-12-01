/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 00:38:45 by slazar            #+#    #+#             */
/*   Updated: 2024/12/02 00:43:47 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void test(T &container, int value)
{
	try
	{
		typename T::iterator it = easyfind(container, value);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
}
int main()
{
	std::vector<int> vec;
	vec.push_back(11);
	vec.push_back(22);
	vec.push_back(33);
	vec.push_back(44);
	vec.push_back(55);
	test(vec, 33);
	test(vec, 66);
}