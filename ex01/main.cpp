/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:04:27 by huidris           #+#    #+#             */
/*   Updated: 2025/06/22 01:16:36 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "In a village not far from them," << std::endl;
	std::cout << "a bunch of zombie stuck in a man made cage" << std::endl;
	std::cout << "setup by the evil government." << std::endl;

	Zombie* zombie = zombieHorde(30, "Kak Limah");
	for (int i = 0; i < 30; ++i)
	{
		zombie[i].announce();
	}

	delete[] zombie;

	return 0;
}
