
#ifndef		CONTACT_HPP
# define	CONTACT_HPP

# include <string>
# include <iostream>
# include <cctype>

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		Contact();
		~Contact();

		void GetContactInfo();
		void DisplayContact();
		
		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNickname() const;
		
	private:
		bool IsEmpty(const std::string& str) const;
		bool IsValidPhoneNumber(const std::string& phone) const;
		std::string GetValidInput(const std::string& prompt) const;
		std::string GetValidPhoneNumber() const;
};

#endif