/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:14 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:00:30 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"


class Cure : public AMateria
{
private:
    std::string type;
public:
    Cure();
    Cure(Cure &);
    Cure &operator=(Cure &src);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
