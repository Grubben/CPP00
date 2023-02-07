/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endarc <endarc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:26:01 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/07 12:31:27 by endarc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
// private:
public:
	std::string firstn;
	std::string lastn;
	std::string	nickn;
	std::string pnum;
	std::string secret;

	Contact(void);
	~Contact(void);
	void	create(void);

};

#endif
