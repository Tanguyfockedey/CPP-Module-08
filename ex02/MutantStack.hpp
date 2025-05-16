/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:12:39 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/16 15:45:26 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	// Constructors and destructors
	MutantStack();
	MutantStack(const MutantStack &src);
	~MutantStack();

	// operator overload
	MutantStack &operator=(const MutantStack &src);

	// Member functions
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"
