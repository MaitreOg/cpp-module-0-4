/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:53:33 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 02:14:02 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string number;
    std::string name;
    int N;
    Zombie* zombie;

    std::cout << "zombie count :";
    std::cin >> number;
    N = std::stoi(number);
    std::cout << "zombie name:";
    std::cin >> name;
    zombie = zombieHorde(N, name);
    delete []zombie;
}