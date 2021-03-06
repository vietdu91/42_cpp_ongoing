/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:13:56 by emtran            #+#    #+#             */
/*   Updated: 2022/06/23 14:13:19 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	std::cout << "\033[1;32m==========       CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	ClapTrap	man("Super Vietdu91");
	ClapTrap	guy(man);

	std::cout << std::endl;
	std::cout << "\033[1;34m==========       ACTION !!!       ==========\e[0m" << std::endl << std::endl;

	man.attack("Richard Nixon");
	man.takeDamage(100);
	man.attack("");
	man.takeDamage(100);

	std::cout << std::endl;

	guy.takeDamage(9);
	guy.beRepaired(UINT_MAX);
	for (int i = 10; i; i--)
		guy.attack("The Wind");

	std::cout << std::endl;

	std::cout << "\033[1;31m==========       DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	return (0);
}
