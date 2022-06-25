/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:47:39 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 13:42:03 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::index = 0;

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	this->contacts[this->index].requestInput(this->index);
	this->index++;
	if (this->index > 7)
		this->index = 0;
}

void PhoneBook::search()
{
	std::string	line;

	std::cout << std::setfill('_') << std::setw(45) << "" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].getIndex())
			this->contacts[i].displayShort();	
	}
	std::cout << std::setfill('_') << std::setw(45) << "" << std::endl;
	std::cout << "ENTER INDEX OF CONTACT TO DISPLAY OR CANCEL TO GO BACK" << std::endl;
	while (getline(std::cin, line))
	{
		if (!line.compare("CANCEL"))
			break;
		if (line.length() == 1 && std::isdigit(line[0]) && std::stoi(line) > 0 && std::stoi(line) < 9)
		{
			if (this->contacts[std::stoi(line) - 1].getIndex())
			{
				this->contacts[std::stoi(line) - 1].displayAll();
				break ;
			}
		}
		std::cout << "INVALID INDEX. TRY AGAIN OR ENTER CANCEL TO GO BACK" << std::endl;
	}
}
