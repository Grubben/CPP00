#include <iostream>

#include <Contact.hpp>
#include <PhoneBook.hpp>

#include <iomanip>

int main(void)
{
	PhoneBook phonebook;
	std::string input;
	
	while (true)
	{
		std::cout << "Possible options: ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		// input.clear();
		std::getline(std::cin, input);
		if (input == "ADD" || input == "a")
		{
			std::cout << "Adding!" << std::endl;
			phonebook.addContact();
			// input.clear();
		}
		else if (input == "SEARCH" || input == "s")
		{
			std::cout << "Searching!" << std::endl;
            phonebook.show();
		}
		else if (input == "EXIT" || input == "e")
            break;
        // else
		// 	break;
	}
	
	
	return 0;
}