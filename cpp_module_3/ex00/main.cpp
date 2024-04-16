/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:16:20 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 17:45:17 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap player1("sam");
    ClapTrap player2 = player1;


    player1.attack("player2");
    player2.takeDamage(0);
    player2.beRepaired(1);
}