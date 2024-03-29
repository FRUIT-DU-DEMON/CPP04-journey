/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:05:18 by hlabouit          #+#    #+#             */
/*   Updated: 2023/11/24 13:51:07 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    this->name = "ice";
}

Ice::Ice(const Ice &primary) : AMateria(primary)
{
    *this = primary;
}

Ice &Ice::operator=(const Ice &primary)
{
    if (this != &primary)
        AMateria::operator=(primary);
    return (*this);
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    
}