/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:30:38 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 20:57:57 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &src) : _n(src._n), _vec(src._vec)
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span &Span::operator=(const Span &src)
{
	std::cout << "Span assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_n = src._n;
		this->_vec = src._vec;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_vec.size() >= _n)
		throw FullSpanException();
	_vec.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vec.size() + std::distance(begin, end) > _n)
		throw FullSpanException();
	_vec.insert(_vec.end(), begin, end);
}

int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw NoSpanException();
	std::sort(_vec.begin(), _vec.end());
	int minSpan = _vec[1] - _vec[0];
	for (size_t i = 2; i < _vec.size(); i++)
	{
		int span = _vec[i] - _vec[i - 1];
		if (span < minSpan)
		{
			minSpan = span;
		}
	}
	return minSpan;
}

int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw NoSpanException();
	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());
	return (max - min);
}

const char *Span::FullSpanException::what() const throw()
{
	return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "Not enough numbers to calculate span";
}