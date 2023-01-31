/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:43:18 by amaria-d          #+#    #+#             */
/*   Updated: 2023/01/31 17:34:52 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact storage[8];

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	AddContact(void);

};

#endif
