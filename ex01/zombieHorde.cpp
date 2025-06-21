/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:42:23 by huidris           #+#    #+#             */
/*   Updated: 2025/06/22 01:07:47 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{

	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		std::ostringstream oss;
		oss << i + 1;
		horde[i].setName(name + " " + oss.str());
	}
	return horde;
}
