/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:55:38 by emtran            #+#    #+#             */
/*   Updated: 2022/07/19 17:17:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public :
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &rhs);

		void	initEnergy();
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
