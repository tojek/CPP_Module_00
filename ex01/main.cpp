/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:37:13 by mwojtcza          #+#    #+#             */
/*   Updated: 2025/03/05 14:37:14 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

int	main()
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while(1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, cmd);

		std::cout << cmd << std::endl;
		if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
		{
			phoneBook.displayContacts();
			phoneBook.searchContact();
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "invalid input" << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
