/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:37:18 by mwojtcza          #+#    #+#             */
/*   Updated: 2025/03/05 14:37:19 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class PhoneBook
{
	private:
		Contact		contacts[8];
		int			index;
	public:
		PhoneBook();
		~PhoneBook();
		void		addContact();
		void		displayContacts();
		void		searchContactID(int id);
		void		searchContact();
};

#endif