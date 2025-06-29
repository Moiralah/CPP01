/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 05:40:25 by huidris           #+#    #+#             */
/*   Updated: 2025/06/30 02:56:18 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() : _buffer(){}
File::~File(){}

std::string File::readFile(std::string filename)
{
	std::string read;
	std::ifstream readingFile(filename.c_str());
	while (getline(readingFile, _buffer))
		read += _buffer + "\n";
	return read;
}

void File::contentReplace(std::string &content, const std::string s1, const std::string s2)
{
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
}

