/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 08:01:46 by huidris           #+#    #+#             */
/*   Updated: 2025/06/22 01:24:55 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <new>
#include <sstream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();

		void announce(void) const;
		void setName(const std::string &name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
