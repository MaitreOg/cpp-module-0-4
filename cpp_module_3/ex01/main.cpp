/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:59:41 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 18:01:26 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::string s = "sam";
    ScavTrap player1(s);
    ScavTrap player2("frank");
    player1.guardGate();
    player1.attack("frank");
    player2.takeDamage(20);

    return (0);
}