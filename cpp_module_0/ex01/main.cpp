/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 00:32:59 by smarty            #+#    #+#             */
/*   Updated: 2024/04/06 20:36:41 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	std::string	line;
	PhoneBook	telephone;
	int	i;

	i = 0;
	while(1)
	{
		std::cout << "ADD | SEARCH | EXIT" << std::endl << std::endl;
    	std::cin >> line;
		std::cout << std::endl;

		if (line == "add" || line == "ADD")
		{
			telephone.set_contact(i);
			i++;
			if (i == 8)
				i = 0;
		}
		if (line == "search" || line == "SEARCH")
		{
			telephone.get_contact();
		}
		if (line == "exit" || line == "EXIT")
			return (0);
	}
}