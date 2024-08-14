/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:53:33 by smarty            #+#    #+#             */
/*   Updated: 2024/08/13 19:39:55 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string number;
    std::string name;
    int N;
    int i = 0;
    Zombie* zombie;

    std::cout << "zombie count : ";
    std::getline(std::cin, number);
    while (number[i])
        i++;
    if ((i > 9 && number[0] >= 2) || i > 10)
        return (0);
    N = std::stoi(number);
    std::cout << "zombie name : ";
    std::getline(std::cin, name);
    zombie = zombieHorde(N, name);
    delete []zombie;
}