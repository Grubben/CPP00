/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:26:01 by amaria-d          #+#    #+#             */
/*   Updated: 2023/01/31 18:01:04 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
private:
	std::string firstn;
	std::string lastn;
	std::string	nickn;
	std::string pnum;
	std::string secret;

public:
	Contact(void);
	~Contact(void);
	void	AddContact(void);

};

#endif
