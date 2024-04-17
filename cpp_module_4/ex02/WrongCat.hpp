/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:37:15 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 19:43:15 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"



class   WrongCat :  public WrongAnimal 
{
private:

public:
    WrongCat(const std::string&);
    WrongCat();
    ~WrongCat(void);
    WrongCat(WrongCat &);
    WrongCat &operator=(WrongCat &src);
};

#endif