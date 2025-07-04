/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 05:40:25 by huidris           #+#    #+#             */
/*   Updated: 2025/07/04 20:56:51 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	function[0] = &Harl::_debug,
	function[1] = &Harl::_info,
	function[2] = &Harl::_warning,
	function[3] = &Harl::_error,

	levels[0] = "DEBUG",
	levels[1] = "INFO",
	levels[2] = "WARNING",
	levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::_debug(void)
{
	std::cout << "You're the De, me the Bug. Together we're the DeBug" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "Did you know, Fallopian tube is not actually attached to ovary" << std::endl;
	std::cout << "They can actually move around and touch other organ." << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "Hot Latte, 90 degree celsius. Might burn. Be careful." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "404: page does not exist." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*function[i])();
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}
