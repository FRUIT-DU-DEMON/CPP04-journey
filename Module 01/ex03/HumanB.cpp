/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:24:40 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/19 13:42:06 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string person) : name(person), weapon(NULL) {}

void HumanB::attack()
{
	if (this->weapon != NULL)
		std::cout<< this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout<< this->name << " tta jib lbala!" << std::endl;
		
}

void HumanB::setWeapon(Weapon &whichWeapon)
{
	this->weapon = &whichWeapon;
}
