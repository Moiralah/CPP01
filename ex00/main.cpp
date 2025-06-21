/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:04:27 by huidris           #+#    #+#             */
/*   Updated: 2025/06/21 08:19:48 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "It's the end of the world," << std::endl;
	std::cout << "the plague is spreading like a hungry wolf" << std::endl;
	std::cout << "in the middle of neverending winter." << std::endl;

	Zombie zombie1("Foo");
	Zombie zombie2("Faa");
	zombie1.announce();
	zombie2.announce();

	std::cout << "The two brothers have been infected, " << std::endl;
	std::cout << "their voracious for brain, vanish their humanity." << std::endl;
	std::cout << "They ferociously banging the hut, with scared little boy inside." << std::endl;
	std::cout << "The hut demolish, the boy got bitten." << std::endl;

	Zombie* zombie3 = newZombie("Little boy");
	zombie3->announce();
	randomChump("Roy");
	delete zombie3;

	std::cout << "As the brain became scarce," << std::endl;
	std::cout << "the one left starting to rot slowly, destroyed from within." << std::endl;

	return 0;
}
