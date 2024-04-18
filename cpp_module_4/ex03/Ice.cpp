/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:47 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:08:55 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()  : AMateria("Ice")
{

}
Ice::Ice(Ice &src)  : AMateria("Ice")
{

}
Ice &Ice::operator=(Ice &src)
{
    this->type = src.getType();
    return *this;
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
    AMateria* clone = new Ice();
    return clone;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}