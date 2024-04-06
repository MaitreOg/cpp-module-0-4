/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:21:23 by smarty            #+#    #+#             */
/*   Updated: 2024/04/06 20:36:31 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_contact(int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	long		pn;
	std::string	darkset_secret;

	std::cout << "First name : ";
	std::cin >> first_name;
	std::cout << std::endl;
	this->repertoire[i].set_first_name(first_name);
	std::cout << "Last name : ";
	std::cin >> last_name;
	std::cout << std::endl;
	this->repertoire[i].set_last_name(last_name);
	std::cout << "Nick name : ";
	std::cin >> nick_name;
	std::cout << std::endl;
	this->repertoire[i].set_nick_name(nick_name);
	std::cout << "Phone number : ";
	std::cin >> phone_number;
	std::cout << std::endl;
	pn = std::stol(phone_number);
	this->repertoire[i].set_phone_number(pn);
	std::cout << "Darkset secret : ";
	std::cin >> darkset_secret;
	std::cout << std::endl;
	this->repertoire[i].set_secret(darkset_secret);
}

void	PhoneBook::get_contact(void)
{
	int         i = -1;
	std::string number;
	while (++i < 8)
		this->repertoire[i].print_contact_tab(i);
	std::cout << "enter a number between 1 and 8" << std::endl;
	std::cin >> number;
	std::cout << std::endl;
	i = std::stoi(number) - 1;
	std::cout << std::setw(14) << std::left << "first name" << " = " << this->repertoire[i].get_first_name() << std::endl;
	std::cout << std::setw(14) << std::left << "last name" << " = " << this->repertoire[i].get_last_name() << std::endl;
	std::cout << std::setw(14) << std::left << "nick name" << " = " << this->repertoire[i].get_nick_name() << std::endl;
	std::cout << std::setw(14) << std::left << "phone number" << " = " << this->repertoire[i].get_phone_number() << std::endl;
	std::cout << std::setw(14) << std::left << "darkest secret" << " = " << this->repertoire[i].get_secret() << std::endl << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->i = -1;
	this->i += 1;
}