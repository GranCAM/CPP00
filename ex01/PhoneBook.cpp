/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:17:20 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/24 19:37:02 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        for (int i = 0; i < 7; i++) 
            Contacts[i] = Contacts[i + 1];
        Contacts[7].GetContactInfo();
    }
}

std::string PhoneBook::LengthPrint(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::SearchContacts() 
{
    int index;

    if (ContactCount == 0) 
    {
        std::cout << "No contacts available!\n\n";
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "-------------------------------------------\n";
    for (int i = 0; i < ContactCount; i++) 
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << LengthPrint(Contacts[i].GetFirstName()) << "|"
                  << std::setw(10) << LengthPrint(Contacts[i].GetLastName()) << "|"
                  << std::setw(10) << LengthPrint(Contacts[i].GetNickname()) << std::endl;
    }
    std::cout << "\nEnter contact index to display : ";
    std::cin >> index;
    std::cout << "tenemos: " << PhoneBook::ContactCount << std::endl;
    if (index >= 0 && index < ContactCount && index < 8)  
    {
        std::cout << "\n--- Contact Details ---\n";
        Contacts[index].DisplayContact();
        std::cout << std::endl;
    } 
    else
        std::cout << "Invalid index!\n\n";
    std::cin.ignore();
}
