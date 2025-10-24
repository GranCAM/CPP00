/* ************************************************************************** */
/*                                                                            */
/*   timestamp_example.cpp - Shows correct timestamp format                  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

// This is an example of what your _displayTimestamp should do
void example_displayTimestamp() {
    std::time_t now = std::time(0);
    std::tm* timeinfo = std::localtime(&now);
    
    std::cout << "[" 
              << (timeinfo->tm_year + 1900)                           // Year (tm_year is years since 1900)
              << std::setfill('0') << std::setw(2) << (timeinfo->tm_mon + 1)  // Month (tm_mon is 0-11)
              << std::setfill('0') << std::setw(2) << timeinfo->tm_mday       // Day
              << "_" 
              << std::setfill('0') << std::setw(2) << timeinfo->tm_hour       // Hour
              << std::setfill('0') << std::setw(2) << timeinfo->tm_min        // Minute
              << std::setfill('0') << std::setw(2) << timeinfo->tm_sec        // Second
              << "] ";
}

int main() {
    std::cout << "=== Timestamp Format Examples ===" << std::endl;
    
    std::cout << "Current timestamp: ";
    example_displayTimestamp();
    std::cout << std::endl;
    
    std::cout << "Another timestamp: ";
    example_displayTimestamp();
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "Expected format: [YYYYMMDD_HHMMSS] " << std::endl;
    std::cout << "Example from log: [19920104_091532] " << std::endl;
    
    return 0;
}
