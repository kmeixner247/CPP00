/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:50:23 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 13:51:42 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
	Contact();
	~Contact();
	void	requestInput(int index);
	void	displayShort();
	void	displayAll();
	void	fitToTen(std::string str);
	int		getIndex();

	private:
	int				index;
	std::string 	firstName;
	std::string 	lastName;
	std::string 	nickname;
	std::string 	phoneNumber;
	std::string 	darkestSecret;
};
#endif