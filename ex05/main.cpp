/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:04:27 by huidris           #+#    #+#             */
/*   Updated: 2025/06/30 05:49:47 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **argv)
{
	Harl harl;
	if (ac == 2)
	{
		harl.complain(argv[1]);
	}
	else
	{
		std::cout << "Usage: ./harl_filter <level>" << std::endl;
	}

	return 0;
}
