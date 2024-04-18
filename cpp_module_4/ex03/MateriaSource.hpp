/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:24:25 by smarty            #+#    #+#             */
/*   Updated: 2024/04/18 20:27:39 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private: 
    AMateria *(inv[4]);
public:
    MateriaSource();
    MateriaSource(MateriaSource &);
    MateriaSource &operator=(MateriaSource &src);
    ~MateriaSource();
    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};

#endif
