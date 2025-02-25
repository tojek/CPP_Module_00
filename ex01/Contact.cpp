#include "Contact.hpp"

void	Contact::setContact()
{
	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
}

void	Contact::displayContactDetail()
{
	std::cout << "| First Name: " 		<< truncField(firstName) << std::endl;
    std::cout << "| Last Name: " 		<< truncField(lastName) << std::endl;
    std::cout << "| Nickname: " 		<< truncField(nickname) << std::endl;
    std::cout << "| Phone Number: " 	<< truncField(phoneNumber) << std::endl;
    std::cout << "| Darkest Secret: " 	<< truncField(darkestSecret) << std::endl;
}

std::string	Contact::truncField(std::string &field)
{
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	return field;
}
