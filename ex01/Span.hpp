/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:34:28 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 20:53:16 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _vec;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);
		void addNumber(int n);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		class FullSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
