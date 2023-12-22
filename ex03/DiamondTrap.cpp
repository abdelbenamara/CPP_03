/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:04:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 18:31:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(),
								 ScavTrap(),
								 FragTrap(),
								 name("unnamed")
{
	std::cout << "DiamondTrap " << *this;
	std::cout << " default constructor called" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

	return;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),
													ScavTrap(name + "_clap_name"),
													FragTrap(name + "_clap_name"),
													name(name)
{
	std::cout << "DiamondTrap " << *this;
	std::cout << " name constructor called" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src),
												   ScavTrap(src),
												   FragTrap(src)
{
	std::cout << "DiamondTrap " << *this;
	std::cout << " copy constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << *this;
	std::cout << " destructor called" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);

	if (this != &rhs)
		this->name = rhs.name;

	return *this;
}

std::string const &DiamondTrap::getName(void) const
{
	return this->name;
}

void DiamondTrap::whoAmI()
{
	std::cout << "\033[1;35m";
	std::cout << "DiamondTrap name is '" << this->name;
	std::cout << "' (ClapTrap name is '" << ClapTrap::name << "')";
	std::cout << "\033[0m" << std::endl;

	return;
}

std::ostream &operator<<(std::ostream &o, DiamondTrap const &i)
{
	o << i.getName();

	return o;
}
