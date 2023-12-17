/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:45:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/17 17:39:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap1;
	ScavTrap scavTrap2(scavTrap1);
	ClapTrap clapTrap3(scavTrap2);

	scavTrap2 = ScavTrap("Foo");
	clapTrap3 = ScavTrap("Bar");

	while (clapTrap3.getHitPoints())
	{
		scavTrap2.attack(clapTrap3.getName());
		clapTrap3.takeDamage(scavTrap2.getAttackDamage());
		clapTrap3.beRepaired(scavTrap2.getAttackDamage() / 4);
	}

	scavTrap2.guardGate();

	return 0;
}
