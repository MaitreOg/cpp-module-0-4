/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:20:21 by smarty            #+#    #+#             */
/*   Updated: 2024/04/06 20:36:27 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void	contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void	contact::set_nick_name(std::string nick_name)
{
	this->nick_name = nick_name;
}

void	contact::set_secret(std::string secret)
{
	this->darkset_secret = secret;
}

void	contact::set_phone_number(long pn)
{
	this->phone_number = pn;
}

std::string	contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	contact::get_nick_name(void)
{
	return (this->nick_name);
}

std::string	contact::get_secret(void)
{
	return (this->darkset_secret);
}

long	contact::get_phone_number(void)
{
	return (this->phone_number);
}

void    contact::print_contact_tab(int i)
{
	int	width = 10;

	std::cout << std::setw(width) << std::right << (i + 1) << "|";
	if (this->first_name.length() > width)
        std::cout << std::setw(width) << std::right << this->first_name.substr(0, width - 1) + "." << "|";
    else
        std::cout << std::setw(width) << std::right << this->first_name << "|";
	
	if (this->last_name.length() > width)
        std::cout << std::setw(width) << std::right << this->last_name.substr(0, width - 1) + "." << "|";
    else
        std::cout << std::setw(width) << std::right << this->last_name << "|";
	
	if (this->nick_name.length() > width)
        std::cout << std::setw(width) << std::right << this->nick_name.substr(0, width - 1) + "." << "|";
    else
        std::cout << std::setw(width) << std::right << this->nick_name << "|";
	std::cout << std::endl;
	
}

