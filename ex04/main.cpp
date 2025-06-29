/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:04:27 by huidris           #+#    #+#             */
/*   Updated: 2025/06/30 02:56:48 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **argv)
{
	File file;
	if (ac < 4)
	{
		std::cout << "Argument invalid. Please input valid argument." << std::endl;
		std::cout << "./<program> <filename> <s1> <s2> " << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string content;

	content += file.readFile(filename);
	if (content.empty())
	{
		std::cout << "File is empty or does not exist." << std::endl;
		return 0;
	}

	file.contentReplace(content, s1, s2);
	std::ofstream fileReplace((filename + ".replace").c_str());
	fileReplace << content;

	return 0;
}
