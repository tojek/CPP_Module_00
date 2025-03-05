/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:37:11 by mwojtcza          #+#    #+#             */
/*   Updated: 2025/03/05 14:37:12 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string		phoneNumber;
		std::string		darkestSecret;

	public:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;

		void			setContact();
		void			displayContactDetail();
		std::string 	truncField(std::string &field);
		std::string 	getNonEmptyInput(std::string prompt);

};



#endif