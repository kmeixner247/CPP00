/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:00:19 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 13:38:15 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() :
index(0),
firstName(""),
lastName(""),
nickname(""),
phoneNumber(""),
darkestSecret("")
{
}

Contact::~Contact()
{
}

void Contact::requestInput(int index)
{
	this->index = index + 1;
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, this->lastName);
	std::cout << "Enter nickname:" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter phone number:" << std::endl;
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Enter darkest secret:" << std::endl;
	std::getline(std::cin, this->darkestSecret);
}

void Contact::displayShort()
{
	std::cout << "|";
	this->fitToTen(std::to_string(this->index));
	this->fitToTen(this->firstName);
	this->fitToTen(this->lastName);
	this->fitToTen(this->nickname);
	std::cout << std::endl;
}

void Contact::displayAll()
{
	std::cout << "First Name:\t" << this->firstName << std::endl;
	std::cout << "Last Name:\t" << this->lastName<< std::endl;
	std::cout << "Nickname:\t" << this->nickname<< std::endl;
	std::cout << "Phone Number:\t" << this->phoneNumber<< std::endl;
	std::cout << "Darkest Secret:\t" << this->darkestSecret<< std::endl;
}

void Contact::fitToTen(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << str << "|";
}

int Contact::getIndex()
{
	return (this->index);
}