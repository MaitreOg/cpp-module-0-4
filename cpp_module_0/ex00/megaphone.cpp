/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:40:59 by smarty            #+#    #+#             */
/*   Updated: 2024/04/06 20:47:14 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i;
    int y;

    i = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (++i < ac)
    {
        y = -1;
        while (av[i][++y])
            av[i][y] = std::toupper(av[i][y]);
        std::cout << av[i];
    }
    std::cout << std::endl;
}
