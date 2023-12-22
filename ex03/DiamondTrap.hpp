/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:02:03 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 18:40:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap const &rhs);

	std::string const &getName(void) const;
	void whoAmI();

private:
	std::string name;
};

std::ostream &operator<<(std::ostream &o, DiamondTrap const &i);

#endif
