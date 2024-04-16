/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:19:12 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:34:43 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& type)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = type;
}
Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}
Animal::Animal(Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(Animal &src)
{
    std::cout << "Animal affectation operator called" << std::endl;
    return src;
}
void Animal::makeSound(void) const
{
    if (this->type == "Cat")
        std::cout << "Miiaouuuu !!" << std::endl;
    else if (this->type == "Dog")
        std::cout << "Woouf Woouf !!" << std::endl;
    else
        std::cout << "grrr grrr !!" << std::endl;
}
std::string Animal::getType(void) const
{
    return this->type;
}
