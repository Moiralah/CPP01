/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 08:01:46 by huidris           #+#    #+#             */
/*   Updated: 2025/07/04 20:59:56 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string>
#include <fstream>

class Harl
{
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);

		std::string levels[4];
		void (Harl::*function[4])();

	public:
		Harl();
		~Harl();

		void complain(std::string level);
};

#endif
