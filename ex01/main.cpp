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