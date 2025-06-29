/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 08:01:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/29 19:27:40 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB(const std::string& name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack(void) const;
};

#endif
