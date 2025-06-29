/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:04:27 by huidris           #+#    #+#             */
/*   Updated: 2025/06/28 05:54:45 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPTR = &brain;
	std::string& brainREF = brain;

	std::cout << "Address of the string   : " << &brain << std::endl;
	std::cout << "Address held by brainPTR: " << brainPTR << std::endl;
	std::cout << "Address held by brainREF: " << &brainREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value of the string variable: " << brain << std::endl;
	std::cout << "Value pointed to by brainPTR: " << *brainPTR << std::endl;
	std::cout << "Value pointed to by brainREF: " << brainREF << std::endl;
	std::cout << std::endl;

	return 0;
}
