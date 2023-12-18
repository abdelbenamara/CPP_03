/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:48:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 14:33:22 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << *this;
	std::cout << " default constructor called" << std::endl;

	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << *this;
	std::cout << " name constructor called" << std::endl;

	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap " << *this;
	std::cout << " copy constructor called" << std::endl;

	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << *this;
	std::cout << " destructor called" << std::endl;

	return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);

	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;35m";
	std::cout << "FragTrap " << this->getName();
	std::cout << " gives high fives!";
	std::cout << "\033[0m" << std::endl;

	return;
}
