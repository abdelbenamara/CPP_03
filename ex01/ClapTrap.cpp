/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:16:38 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 16:29:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("unnamed"),
						   hitPoints(10),
						   energyPoints(10),
						   attackDamage(0)
{
	std::cout << "ClapTrap " << *this;
	std::cout << " default constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string name) : name(name),
									   hitPoints(10),
									   energyPoints(10),
									   attackDamage(0)
{
	std::cout << "ClapTrap " << *this;
	std::cout << " name constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << *this;
	std::cout << " copy constructor called" << std::endl;

	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << *this << " destructor called" << std::endl;

	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}

	return *this;
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;

	return;
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return this->hitPoints;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;

	return;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return this->energyPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;

	return;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return this->attackDamage;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;

	return;
}

void ClapTrap::attack(const std::string &target)
{
	if (!hitsAndEnergyPointsCheck())
		return;

	std::cout << "\033[1;31m";
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->attackDamage;
	std::cout << " points of damage!";
	std::cout << "\033[0m" << std::endl;
	this->consumeEnergyPoints(1);

	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;33m";
	std::cout << this->name << " loses ";
	std::cout << amount << " hit points!";
	std::cout << "\033[0m" << std::endl;
	this->hitPoints -= amount > this->hitPoints ? this->hitPoints : amount;
	std::cout << this->name << " has ";
	std::cout << this->hitPoints << " hit points now!" << std::endl;

	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!hitsAndEnergyPointsCheck())
		return;

	std::cout << "\033[1;32m";
	std::cout << this->name << " gets ";
	std::cout << amount << " hit points back!";
	std::cout << "\033[0m" << std::endl;
	this->hitPoints += amount;
	std::cout << this->name << " has ";
	std::cout << this->hitPoints << " hit points now!" << std::endl;
	this->consumeEnergyPoints(1);

	return;
}

bool ClapTrap::hitsAndEnergyPointsCheck(void) const
{
	if (!this->hitPoints)
	{
		std::cout << this->name << " has no hit points left!" << std::endl;

		return false;
	}

	if (!this->energyPoints)
	{
		std::cout << "\033[0;36m";
		std::cout << this->name << " has no energy points left!";
		std::cout << "\033[0m" << std::endl;

		return false;
	}

	return true;
}

void ClapTrap::consumeEnergyPoints(unsigned int amount)
{
	this->energyPoints -= amount;
	std::cout << "\033[0;36m";
	std::cout << this->name << " has ";
	std::cout << this->energyPoints << " energy points now!";
	std::cout << "\033[0m" << std::endl;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.getName();

	return o;
}
