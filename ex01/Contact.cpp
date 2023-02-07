/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endarc <endarc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:29:14 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/07 11:57:21 by endarc           ###   ########.fr       */
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
		std::getline(std::cin, input);
		if (! std::cin)
		{
			input = "";	
		}
		std::cout << input << std::endl;
	}
	while (input == "");
	return input;
}

void	Contact::create(void)
{
	this->firstn = getin("First name> ");
	this->lastn = getin("Last name> ");
	this->nickn = getin("Nickname> ");
	this->pnum = getin("Phone Number> ");
	this->secret = getin("Darkest Secret> ");	
}

/*
int main(void)
{
    Contact hello;
    
	hello.create();
    return 0;
}
*/
