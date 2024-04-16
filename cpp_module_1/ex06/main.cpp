/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:18:12 by smarty            #+#    #+#             */
/*   Updated: 2024/04/10 19:49:57 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	int	i = 0;
	int level = 5;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl harl;
	if (ac != 2)
	{
		std::cerr << "pls enter valid arguments : ./HarlFilter level" << std::endl;
		return (0);
	}
	while (i < 4)
	{
		if (av[1] == levels[i])
			level = i;
		i++;
	}
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}