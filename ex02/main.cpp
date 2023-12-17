/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:45:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/17 18:08:54 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragTrap1;
	FragTrap fragTrap2(fragTrap1);
	ScavTrap scavTrap3;
	ClapTrap clapTrap4(scavTrap3);

	fragTrap2 = FragTrap("Foo");
	clapTrap4 = FragTrap("Bar");

	while (clapTrap4.getHitPoints())
	{
		fragTrap2.attack(clapTrap4.getName());
		clapTrap4.takeDamage(fragTrap2.getAttackDamage());
		clapTrap4.beRepaired(fragTrap2.getAttackDamage() / 3);
	}

	fragTrap2.highFivesGuys();

	return 0;
}
