/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:16:03 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/16 15:16:04 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
	std::cout << "MutantStack assignment operator called" << std::endl;
	if (this != &src)
		std::stack<T>::operator=(src);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}
