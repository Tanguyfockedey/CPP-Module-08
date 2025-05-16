/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:14:51 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/15 18:33:07 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

class NotFoundException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Value not found";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
	{
		throw NotFoundException();
	}
	return it;
}
