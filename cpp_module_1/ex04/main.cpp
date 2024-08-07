/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:06:06 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:24:32 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileTransfer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "pls enter valid argument: ./executable filename s1 s2" << std::endl;
        return (0);
    }
    std::string file = av[1];
    std::string add = ".replace";
    std::string file2;
    file2.append(file);
    file2.append(add);
    transfert_file(file, file2, av[2], av[3]);
    return (0);
}