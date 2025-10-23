
#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

void Contact::GetContactInfo()
{
	std::cout << "Introduce the First Name: \n";
	std::getline(std::cin, FirstName);
	std::cout << "Introduce the Last Name: \n";
	std::getline(std::cin, LastName);
	std::cout << "Introduce the Nick: \n";
	std::getline(std::cin, NickName);
	std::cout << "Introduce the Phone Number: \n";
	std::getline(std::cin, PhoneNumber);
	std::cout << "Introduce the Darkest Deepest Secret: \n";
	std::getline(std::cin, DarkestSecret);
}

void Contact::DisplayContact()
{
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nick: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Deepest Secret: " << DarkestSecret << std::endl;
}
