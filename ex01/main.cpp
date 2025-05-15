/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:33:47 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 20:51:32 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>

int main()
{
	// Test with a small number of elements
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	
	try
	{
		sp.addNumber(12);
	}
	catch (const Span::FullSpanException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	// Test with a large number of elements
	std::cout << std::endl;
	srand(time(NULL));
	Span largeSpan(100000);
	for (int i = 0; i < 10000; ++i)
	{
		largeSpan.addNumber(rand() % 100000);
	}
	std::cout << "Shortest span in large span: " << largeSpan.shortestSpan() << std::endl;
	std::cout << "Longest span in large span: " << largeSpan.longestSpan() << std::endl;
	
	// Test with a vector of iterators
	std::cout << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 20000; ++i)
	{
		vec.push_back(rand() % 100000);
	}

	for (int i = 1; i < 20; i++)
	{
		std::cout << "i = " << i << std::endl;
		try
		{
			largeSpan.addNumbers(vec.begin(), vec.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			break;
		}
	}

	std::cout << "Shortest span in large span: " << largeSpan.shortestSpan() << std::endl;
	std::cout << "Longest span in large span: " << largeSpan.longestSpan() << std::endl << std::endl;
	
}
