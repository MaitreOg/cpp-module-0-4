/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:24:11 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:31:27 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->inv[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
    int i = 0;

    while (src.inv[i])
    {
        this->inv[i] = src.inv[i];
        i++;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource &src)
{
    int i = 0;

    while (src.inv[i])
    {
        this->inv[i] = src.inv[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->inv[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
    int i = 0;

    while(this->inv[i])
        i++;
    if (i < 4)
        this->inv[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (this->inv[i]->getType() != type && i < 4)
        i++;
    if (this->inv[i]->getType() == type)
        return  (this->inv[i]->clone());
    return (0);
}

