/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:36:18 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:44:21 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;

}
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;

}
WrongCat::WrongCat(WrongCat &src): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat copy constructor called" << std::endl;

}
WrongCat &WrongCat::operator=(WrongCat &src)
{
    std::cout << "WrongCat affectation operator called" << std::endl;
    return src;
}