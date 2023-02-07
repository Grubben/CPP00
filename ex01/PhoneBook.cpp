/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endarc <endarc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:43:47 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/07 11:55:53 by endarc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	index = 0;
	
	if (index == 9)
		index = 0;
	// if (storage[index] != NULL)
	// 	delete storage[index]
	//TODO: possible memory leak if there's something in there already
	storage[index].create();
	index++;
}

int main(void)
{
	PhoneBook phonebook;
	
	std::string input;
	
	while (true)
	{
		std::cout << "Possible options: ADD, SEARCH or EXIT" << std::endl;
		// input.clear();
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Adding!" << std::endl;
			phonebook.addContact();
			// input.clear();
		}
		else
			break;
	}
	
	
	return 0;
}