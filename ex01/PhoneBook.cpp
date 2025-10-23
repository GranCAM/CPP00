#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : ContactCount(0) 
{
}

PhoneBook::~PhoneBook() 
{
}

void PhoneBook::AddContact() 
{
    if (ContactCount < 8) 
	{
        std::cout << "Adding new contact (" << (ContactCount + 1) << "/8):\n";
        Contacts[ContactCount].GetContactInfo();
        ContactCount++;
    } 
	else 
	{
        std::cout << "PhoneBook is full! Replacing oldest contact:\n";
        for (int i = 0; i < 7; i++) {
            Contacts[i] = Contacts[i + 1];
        }
        Contacts[7].GetContactInfo();
    }
}

void PhoneBook::SearchContacts() {
    if (ContactCount == 0) {
        std::cout << "No contacts available!\n\n";
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < ContactCount; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << "Contact" + std::to_string(i) << "|"
                  << std::setw(10) << "Data" << "|"
                  << std::setw(10) << "Info" << std::endl;
    }

    std::cout << "\nEnter contact index to display (0-" << (ContactCount - 1) << "): ";
    int index;
    std::cin >> index;

    if (index >= 0 && index < ContactCount) {
        std::cout << "\n--- Contact Details ---\n";
        Contacts[index].DisplayContact();
        std::cout << std::endl;
    } else {
        std::cout << "Invalid index!\n\n";
    }

    std::cin.ignore();
}
