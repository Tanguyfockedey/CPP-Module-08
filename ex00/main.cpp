/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:14:00 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 18:30:43 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>

int main(void)
{
	{
		std::vector<int> vec(0);
		vec.push_back(5);
		vec.push_back(10);
		vec.push_back(20);
		
		try
		{
			std::cout << "Found: " << *easyfind(vec, 10) << std::endl;
			std::cout << "Found: " << *easyfind(vec, 15) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::deque<int> dec(0);
		dec.push_back(10);
		dec.push_back(20);
		dec.push_front(5);
		
		try
		{
			std::cout << "Found: " << *easyfind(dec, 20) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
