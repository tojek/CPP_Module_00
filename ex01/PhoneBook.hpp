#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

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
		void		searchContact();
};

#endif