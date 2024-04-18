/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:55 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:00:34 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
private:
    std::string type;
public:
    Ice();
    Ice(Ice &);
    Ice &operator=(Ice &src);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
