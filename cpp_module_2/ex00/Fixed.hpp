/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:52:54 by smarty            #+#    #+#             */
/*   Updated: 2024/04/10 23:02:03 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class   Fixed{

private:
    int nb;
    static const int bit_fract = 8;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed &);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif