/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:45:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/17 17:38:54 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("Foo");
	ClapTrap clapTrap3(clapTrap2);

	clapTrap3 = ClapTrap("Bar");

	while (clapTrap3.getEnergyPoints())
	{
		clapTrap2.attack(clapTrap3.getName());
		clapTrap3.takeDamage(clapTrap2.getAttackDamage());
		clapTrap3.beRepaired(clapTrap2.getAttackDamage());
	}

	return 0;
}
