/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:53:45 by smarty            #+#    #+#             */
/*   Updated: 2024/04/08 20:01:57 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string& ref = s;
    std::string* pointeur = &s;

    std::cout << "adresse string: " << &s << std::endl;
    std::cout << "adresse ref: " << &ref << std::endl;
    std::cout << "adresse pointeur: " << &pointeur << std::endl;

    std::cout << "string: " << s << std::endl;
    std::cout << "ref: " << ref << std::endl;
    std::cout << "pointeur: " << pointeur << std::endl;
}