/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:17:17 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/24 16:17:18 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	Contacts[8];
		int		ContactCount;
	public:
		PhoneBook();
		~PhoneBook();

		void AddContact();
		void RemovedAddContact();
		void SearchContacts();
		std::string LengthPrint(std::string str);
};

#endif