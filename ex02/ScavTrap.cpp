/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:11:45 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 17:45:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap " << *this;
	std::cout << " default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	return;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << *this;
	std::cout << " name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << *this;
	std::cout << " copy constructor called" << std::endl;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << *this;
	std::cout << " destructor called" << std::endl;

	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);

	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->hitsAndEnergyPointsCheck())
		return;

	std::cout << "\033[1;31m";
	std::cout << "ScavTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->attackDamage;
	std::cout << " points of damage!";
	std::cout << "\033[0m" << std::endl;
	this->consumeEnergyPoints(1);

	return;
}

void ScavTrap::guardGate()
{
	std::cout << "\033[1;35m";
	std::cout << "ScavTrap " << this->name;
	std::cout << " is now in Gate keeper mode!";
	std::cout << "\033[0m" << std::endl;

	return;
}
