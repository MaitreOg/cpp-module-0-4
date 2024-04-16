/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:47:06 by smarty            #+#    #+#             */
/*   Updated: 2024/04/12 15:00:40 by smarty           ###   ########.fr       */
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
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    
    Fixed &operator=(const Fixed &);

    // Opérateurs de comparaison
    bool operator>(const Fixed &b);
    bool operator<(const Fixed &b);
    bool operator<=(const Fixed &b);
    bool operator>=(const Fixed &b);
    bool operator==(const Fixed &b);
    bool operator!=(const Fixed &b);

    // Opérateurs arithmétiques
    Fixed operator+(const Fixed &b);
    Fixed operator-(const Fixed &b);
    Fixed operator*(const Fixed &b);
    Fixed operator/(const Fixed &b);

    // Opérateurs d'incrémentation et de décrémentation
    Fixed &operator++(void); // Pré-incrémentation
    Fixed operator++(int a); // Post-incrémentation
    Fixed &operator--(void); // Pré-décrémentation
    Fixed operator--(int a);

    //surcharge min et max
    static Fixed min(const Fixed &a, const Fixed &b);
    Fixed min(const Fixed &b);
    static Fixed max(const Fixed &a, const Fixed &b);
    Fixed max(const Fixed &b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif