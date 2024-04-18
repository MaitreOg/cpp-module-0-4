/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:02 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:08:42 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}
Cure::Cure(Cure &src)  : AMateria("cure")
{

}
Cure &Cure::operator=(Cure &src)
{
    this->type = src.getType();
    return *this;
}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
    AMateria* clone = new Cure();
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}