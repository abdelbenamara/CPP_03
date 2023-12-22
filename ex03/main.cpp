/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:45:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 16:54:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap1;
	FragTrap fragTrap2(diamondTrap1);
	ScavTrap scavTrap3(diamondTrap1);
	ClapTrap clapTrap4(diamondTrap1);

	diamondTrap1 = DiamondTrap("Foo");
	clapTrap4 = DiamondTrap("Bar");

	while (clapTrap4.getHitPoints())
	{
		diamondTrap1.attack(clapTrap4.getName());
		clapTrap4.takeDamage(diamondTrap1.getAttackDamage());
		clapTrap4.beRepaired(diamondTrap1.getAttackDamage() / 3);
	}

	diamondTrap1.guardGate();
	diamondTrap1.highFivesGuys();
	diamondTrap1.whoAmI();

	return 0;
}
