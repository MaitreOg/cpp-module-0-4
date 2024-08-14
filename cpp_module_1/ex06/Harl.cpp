/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:18:10 by smarty            #+#    #+#             */
/*   Updated: 2024/08/14 15:48:17 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I just love it!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money." <<std::endl << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." <<std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl;
}
void    Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	int count = 5;
	while (i < 4)
	{
		if (level == levels[i])
			count = i;
		i++;
	}
	switch (count)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

Harl::Harl (void)
{
}

Harl::~Harl (void)
{
}