/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:37:09 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:38:42 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal &src)
{
    std::cout << "WrongAnimal affectation operator called" << std::endl;
    return src;
}
void WrongAnimal::makeSound(void) const
{
    if (this->type == "Cat")
        std::cout << "Miiaouuuu !!" << std::endl;
    else if (this->type == "Dog")
        std::cout << "Woouf Woouf !!" << std::endl;
    else
        std::cout << "grrr grrr !!" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
    return this->type;
}