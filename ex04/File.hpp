/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 08:01:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/30 02:56:11 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <new>

class File
{
	private:
		std::string _buffer;

	public:
		File();
		~File();

		std::string readFile(std::string filename);
		void contentReplace(std::string &content, const std::string s1, const std::string s2);

};

#endif
