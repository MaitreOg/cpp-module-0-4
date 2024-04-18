/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:09:48 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:27:01 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inv[i] = 0;
}
Character::Character(Character &src)
{
    this->name = src.getName();
    for (int i = 0; i < 4; i++)
        this->inv[i] = src.inv[i];
}
Character &Character::operator=(Character &src)
{
    this->name = src.getName();
    for (int i = 0; i < 4; i++)
        this->inv[i] = src.inv[i];
    return *this;
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->inv[i];
}
std::string const &Character::getName() const
{
    return this->name;
}
void Character::equip(AMateria* m)
{
    int i = 0;

    while (this->inv[i])
        i++;
    if (i < 4)
        this->inv[i] = m;
}
void Character::unequip(int idx)
{
    int i = 0;
    while (i != idx)
        i++;
    if (i < 4 && this->inv[i])
        delete this->inv[i];
}
void Character::use(int idx, ICharacter& target)
{
    this->inv[idx]->use(target);
}
