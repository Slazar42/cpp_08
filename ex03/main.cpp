/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:10:25 by slazar            #+#    #+#             */
/*   Updated: 2025/01/18 18:33:15 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << "element: " << *it << std::endl;
	
	while (!mstack.empty())
		std::cout <<"top of stack: " << mstack.top() << std::endl,mstack.pop();
}