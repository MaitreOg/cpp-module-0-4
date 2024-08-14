/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:18:12 by smarty            #+#    #+#             */
/*   Updated: 2024/08/14 15:48:49 by smarty           ###   ########.fr       */
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
	harl.complain(av[1]);
	return (0);
}