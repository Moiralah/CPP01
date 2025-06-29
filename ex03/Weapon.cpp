/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 05:40:25 by huidris           #+#    #+#             */
/*   Updated: 2025/06/29 18:54:19 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon of type '" << _type << "' created" << std::endl;
}

Weapon::~Weapon(){}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
	std::cout << "Weapon type changed to '" << _type << "'" << std::endl;
}
