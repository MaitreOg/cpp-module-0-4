/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:34:30 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:36:12 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria()
{
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{
}
AMateria::AMateria(AMateria &src)
{
	this->type = src.getType();
}

AMateria &AMateria::operator=(AMateria &src)
{
	this->type = src.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "Ice")
   		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "Cure")
    	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
