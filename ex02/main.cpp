/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:35 by tafocked          #+#    #+#             */
/*   Updated: 2025/05/16 15:17:34 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <iostream>

int main()
{
	{
		std::stack<int> stack;
		stack.push(5);
		stack.push(17);
		stack.push(3);
		std::cout << stack.top() << std::endl;
		stack.pop();
		std::cout << stack.top() << std::endl;
		stack.pop();
		std::cout << stack.top() << std::endl;
		stack.pop();
		std::cout << "Stack size: " << stack.size() << std::endl;
		std::cout << "Stack empty: " << stack.empty() << std::endl;

		// std::stack<std::string>::iterator it = stack.begin();
		// std::stack<std::string>::iterator ite = stack.end();

		// while (it != ite)
		// {
		// 	std::cout << *it << std::endl;
		// 	++it;
		// }
	}
	std::cout << "------------------------" << std::endl << std::endl;
	{
		MutantStack<std::string> mstack;
		mstack.push("Hello ");
		mstack.push("World");
		mstack.push("!");

		MutantStack<std::string> mstack2(mstack);
		MutantStack<std::string> mstack3;
		mstack3 = mstack2;
		
		std::cout << mstack3.top() << std::endl;
		mstack3.pop();
		std::cout << mstack3.top() << std::endl;
		mstack3.pop();
		std::cout << mstack3.top() << std::endl;
		mstack3.pop();
		std::cout << "MutantStack size: " << mstack3.size() << std::endl;
		std::cout << "MutantStack empty: " << mstack3.empty() << std::endl;
	}
	std::cout << "------------------------" << std::endl << std::endl;
	{
		MutantStack<std::string> mstack;
		mstack.push("Hello ");
		mstack.push("World");
		mstack.push("!");

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
		
		std::cout << "MutantStack size: " << mstack.size() << std::endl;
		std::cout << "MutantStack empty: " << mstack.empty() << std::endl;
	}
}