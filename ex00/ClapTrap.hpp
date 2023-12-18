/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:07:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 15:14:33 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap &operator=(ClapTrap const &rhs);

	std::string getName(void) const;
	void setName(std::string name);
	unsigned int getHitPoints(void) const;
	void setHitPoints(unsigned int hitPoints);
	unsigned int getEnergyPoints(void) const;
	void setEnergyPoints(unsigned int energyPoints);
	unsigned int getAttackDamage(void) const;
	void setAttackDamage(unsigned int attackDamage);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	bool hitsAndEnergyPointsCheck(void) const;
	void consumeEnergyPoints(unsigned int amount);

private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
