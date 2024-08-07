/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:23:18 by smarty            #+#    #+#             */
/*   Updated: 2024/04/13 00:12:08 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0 , 1);
    Point b(5 , 1);
    Point c(2, 4);
    Point x(2, 2);
    Point y(0 , 3);

    std::cout << "test 1 (true)" << std::endl << std::endl;

    std::cout << "a : ";
    a.print_coord();
    std::cout << std::endl;
    std::cout << "b : ";
    b.print_coord();
    std::cout << std::endl;
    std::cout << "c : ";
    c.print_coord();
    std::cout << std::endl;
    std::cout << "x : ";
    x.print_coord();
    std::cout << std::endl;

    if (bsp(a, b, c , x) == 0)
        std::cout << "result : false" << std::endl;
    else
        std::cout << "result : true" << std::endl;
    
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "test 2 (false)" << std::endl << std::endl;
    
    std::cout << "a : ";
    a.print_coord();
    std::cout << std::endl;
    std::cout << "b : ";
    b.print_coord();
    std::cout << std::endl;
    std::cout << "c : ";
    c.print_coord();
    std::cout << std::endl;
    std::cout << "y : ";
    y.print_coord();
    std::cout << std::endl;

    if (bsp(a, b, c , y) == 0)
        std::cout << "result : false" << std::endl;
    else
        std::cout << "result : true" << std::endl;
}