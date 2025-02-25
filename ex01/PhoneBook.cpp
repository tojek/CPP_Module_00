#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;

	std::cout << "| Welcome to PhoneBook.v1 |" << std::endl << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "| kthxbye |" << std::endl;
}

void	PhoneBook::addContact()
{
	contacts[index % 8].setContact();
	index++;
}

void	PhoneBook::displayContacts()
{
	int i;
	int contactCount;

	std::cout	<< std::setw(10) << "Index" << " | "
				<< std::setw(10) << "First Name" << " | "
				<< std::setw(10) << "Last Name" << " | "
				<< std::setw(10) << "Nickname" << " | "
				<< std::endl;
	contactCount = (index < 8) ? index : 8;
	for (i = 0; i < contactCount; i++)
	{
		std::cout	<< std::setw(10) << i << " | "
					<< std::setw(10) << contacts[i].truncField(contacts[i].firstName) << " | "
					<< std::setw(10) << contacts[i].truncField(contacts[i].lastName) << " | "
					<< std::setw(10) << contacts[i].truncField(contacts[i].nickname) << " | "
					<< std::endl;
	}
}

void	PhoneBook::searchContact()
{

}