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