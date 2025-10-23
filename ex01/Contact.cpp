
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

void Contact::GetContactInfo()
{
	FirstName = GetValidInput("Introduce the First Name: ");
	LastName = GetValidInput("Introduce the Last Name: ");
	NickName = GetValidInput("Introduce the Nick: ");
	PhoneNumber = GetValidPhoneNumber();
	DarkestSecret = GetValidInput("Introduce the Darkest Deepest Secret: ");
}

void Contact::DisplayContact()
{
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nick: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Deepest Secret: " << DarkestSecret << std::endl;
}

std::string Contact::GetFirstName() const
{
	return FirstName;
}

std::string Contact::GetLastName() const
{
	return LastName;
}

std::string Contact::GetNickname() const
{
	return NickName;
}

bool Contact::IsEmpty(const std::string& str) const
{
	int val = 0;
	if (str.empty())
		return true;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isspace(str[i]))
			val++;
	}
	if (val == 0)
		return true;
	return false;
}

bool Contact::IsValidPhoneNumber(const std::string& phone) const
{
	if (IsEmpty(phone))
		return false;
	
	for (size_t i = 0; i < phone.length(); i++)
	{
		if (!std::isdigit(phone[i]))
			return false;
	}
	return true;
}

std::string Contact::GetValidInput(const std::string& prompt) const
{
	std::string input;
	
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);	
		if (!IsEmpty(input))
			break;
		
		std::cout << "Error: Field cannot be empty. Please try again.\n";
	}
	return input;
}

std::string Contact::GetValidPhoneNumber() const
{
	std::string phone;
	
	while (true)
	{
		std::cout << "Introduce the Phone Number (digits only): ";
		std::getline(std::cin, phone);	
		if (IsValidPhoneNumber(phone))
			break;
		
		std::cout << "Error: Invalid phone number. Use only digits. Field cannot be empty.\n";
	}
	return phone;
}
