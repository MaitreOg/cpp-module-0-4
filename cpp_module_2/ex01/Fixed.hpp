/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:56:11 by smarty            #+#    #+#             */
/*   Updated: 2024/04/11 19:03:05 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>


class   Fixed{

private:
    int nb;
    static const int bit_fract = 8;
public:
    Fixed(void);
    Fixed(const int);
    Fixed(const float);
    ~Fixed(void);
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed &);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif