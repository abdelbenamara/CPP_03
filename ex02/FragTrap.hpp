/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:42:32 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 15:26:36 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap &operator=(FragTrap const &rhs);

	void highFivesGuys(void);
};

#endif
