/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:04:59 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 13:56:08 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook test;
	std::string	line;
	std::cout << "WELCOME TO THE ONE AND ONLY TELEPHONE BOOK!" << std::endl;
	std::cout << "ENTER ADD, SEARCH OR EXIT" << std::endl;
	while (getline(std::cin, line))
	{
		if (!line.compare("EXIT"))
			break ;
		if (!line.compare("ADD"))
			test.addContact();
		if (!line.compare("SEARCH"))
			test.search();
		std::cout << "ENTER ADD, SEARCH OR EXIT" << std::endl;
	}
}