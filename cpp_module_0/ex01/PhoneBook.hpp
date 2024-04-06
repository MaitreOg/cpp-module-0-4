/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:48:35 by smarty            #+#    #+#             */
/*   Updated: 2024/04/06 20:31:40 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class   contact{

private:
	std::string  first_name;
	std::string  last_name;
	std::string  nick_name;
	long    phone_number;
	std::string  darkset_secret;

public:
	void		set_first_name( std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nick_name(std::string nick_name);

	//std::string    get_first_name();

	//contact(std::string first_name, std::string last_name, std::string nick_name, long phone_number, std::string darkset_secret);
	void		set_secret(std::string secret);
	void		set_phone_number(long pn);
	void		print_contact_tab(int i);
	long		get_phone_number(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_secret(void);
};

class   PhoneBook{

private:  
	contact repertoire[8];
	int     i;

public:
	void    set_contact(int i);
	void    get_contact(void);

	PhoneBook(void);
};

#endif