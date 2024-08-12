/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:34:25 by smarty            #+#    #+#             */
/*   Updated: 2024/08/10 15:27:13 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class   contact{

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkset_secret;

public:
	void		set_first_name( std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nick_name(std::string nick_name);
	void		set_secret(std::string secret);
	void		set_phone_number(std::string phone_number);
	void		print_contact_tab(int i);
	std::string	get_phone_number(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_secret(void);
};

#endif