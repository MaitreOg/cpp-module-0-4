/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:41:44 by smarty            #+#    #+#             */
/*   Updated: 2024/04/10 18:39:39 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>


class   Harl{

private:

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    void    complain(std::string level);
    Harl(void);
    ~Harl(void);
};

#endif