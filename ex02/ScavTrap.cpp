/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:11:45 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 14:32:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << *this;
	std::cout << " default constructor called" << std::endl;

	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << *this;
	std::cout << " name constructor called" << std::endl;

	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << *this;
	std::cout << " copy constructor called" << std::endl;

	return;
}

ScavTrap::~ScavTrap()
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
	if (!hitsAndEnergyPointsCheck())
		return;

	std::cout << "\033[1;31m";
	std::cout << "ScavTrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage();
	std::cout << " points of damage!";
	std::cout << "\033[0m" << std::endl;
	this->consumeEnergyPoints(1);

	return;
}

void ScavTrap::guardGate()
{
	std::cout << "\033[1;35m";
	std::cout << "ScavTrap " << this->getName();
	std::cout << " is now in Gate keeper mode!";
	std::cout << "\033[0m" << std::endl;

	return;
}
