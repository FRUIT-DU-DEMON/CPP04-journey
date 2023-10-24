/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:53:54 by hlabouit          #+#    #+#             */
/*   Updated: 2023/10/24 05:12:49 by hlabouit         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include<iostream>            
#include<string>  
#include<iomanip>
#include<ctype.h>  
#include <cstdlib>

class Zombie {
	private :
		std::string name;
	public :
		void announce();
		void set_name(std::string zombie_name);
		~Zombie();
};

void Zombie::set_name(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout<< this->name << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombizz = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombizz[i].set_name(name);
	}
	return (zombizz);
}

int main()
{
	Zombie *zombiizz = zombieHorde(10, "run_dumbass");
	for (int i = 0; i < 10; i++)
		zombiizz[i].announce();
	delete[] zombiizz;
	return (0);
}