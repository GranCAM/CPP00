/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:17:26 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/24 16:17:27 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "=== PhoneBook Application ===\n";
    std::cout << "Commands: ADD, SEARCH, EXIT\n\n";

    while (true) {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.AddContact();
        }
        else if (command == "SEARCH") {
            phoneBook.SearchContacts();
        }
        else if (command == "EXIT") {
            std::cout << "Goodbye!\n";
            break;
        }
        else {
            std::cout << "Invalid command! Use ADD, SEARCH, or EXIT.\n\n";
        }
    }

    return 0;
}