/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:29:14 by amaria-d          #+#    #+#             */
/*   Updated: 2023/01/31 18:09:37 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact( void ) {
    std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact( void ) {
    std::cout << "Contact destructor called" << std::endl;
}

static std::string	getin(const std::string& prompt)
{
	std::string	input;

	do {
		std::cout << prompt;
		std::cin >> input;
		if (! std::cin)
		{
			std::cin.clear();
			input = "";	
		}
		std::cout << input << std::endl;
	}
	while (input == "");
	return input;
}

void	Contact::AddContact(void)
{
	this->firstn = getin("First name> ");
	this->lastn = getin("Last name> ");
	this->nickn = getin("Nickname> ");
	this->pnum = getin("Phone Number> ");
	this->secret = getin("Darkest Secret> ");
	
	

	// while (true)
	// {
	// 	std::cin >> input;
	// 	// if (! std::cin)
	// 	// 	std::cin.clear();
	// 	std::cout << input << std::endl;
	// 	// else if (input == "ADD")
	// 	// 	std::cout << "hellO!" << std::endl;
	// 	// else
	// 	// 	break;
	// }
	
}

int main(void)
{
    Contact hello;
    
	hello.AddContact();
    return 0;
}