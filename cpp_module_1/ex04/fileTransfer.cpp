/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileTransfer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:08:33 by smarty            #+#    #+#             */
/*   Updated: 2024/04/09 20:26:58 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileTransfer.hpp"

std::string replace_string(std::string line, std::string s1, std::string s2)
{
	std::string result;
	int	pos = 0;
	int	occ = line.find(s1);
	while (occ != std::string::npos)
	{
		result.append(line , pos, occ - pos);
		result.append(s2);
		pos = occ + s1.length();
		occ = line.find(s1, pos);
	}
	result.append(line, pos);
	return (result);
}

int transfert_file(std:: string filename, std::string filename2, std::string s1, std::string s2)
{
	std::ifstream	ifile(filename);
	std::ofstream	ofile(filename2);
	std:: string	line;

	
	if (!ifile.is_open()) 
	{
		std::cerr << "Erreur lors de l'ouverture du fichier d input." << std::endl;
		return 1;
	}
	if (!ofile.is_open()) 
	{
		std::cerr << "Erreur lors de l'ouverture du fichier d output." << std::endl;
		return 1;
	}
	while (std::getline(ifile, line))
	{
		line = replace_string(line, s1, s2);
		ofile << line << std::endl;
	}
	ifile.close();
	ofile.close();
	return (0);
}