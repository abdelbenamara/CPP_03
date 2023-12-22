/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:48:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 17:45:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap " << *this;
	std::cout << " default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	return;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << *this;
	std::cout << " name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap " << *this;
	std::cout << " copy constructor called" << std::endl;

	return;
}

FragTrap::~FragTrap(void)
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
	std::cout << "FragTrap " << this->name;
	std::cout << " gives high fives!";
	std::cout << "\033[0m" << std::endl;

	return;
}
