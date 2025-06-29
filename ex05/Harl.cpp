/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 05:40:25 by huidris           #+#    #+#             */
/*   Updated: 2025/06/30 05:57:05 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
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
	std::string levels[] =
	{
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	void (Harl::*functions[])() =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}

	std::cout << "Unknown level: " << level << std::endl;
}
