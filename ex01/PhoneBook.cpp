/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:43:47 by amaria-d          #+#    #+#             */
/*   Updated: 2023/01/31 17:58:13 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "PhoneBook destructor called" << std::endl;
}


// int main(void)
// {
// 	PhoneBook phonebook;
	
// 	std::string input;
	
// 	while (true)
// 	{
// 		std::getline(std::cin, input);
// 		if (input == "ADD")
// 		{
// 			std::cout << "Adding!" << std::endl;
// 			phonebook.AddContact();
// 		}
// 		else
// 			break;
// 	}
	
	
// 	return 0;
// }