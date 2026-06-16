#include <iostream>
#include <string>
#include "triage_logic.cpp" // Importing your triage logic

void showMenu() {
    std::cout << "\n--- Intelligent Support System ---" << std::endl;
    std::cout << "1. Add New Ticket" << std::endl;
    std::cout << "2. View All Tickets" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Select an option: ";
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        showMenu();
        std::cin >> choice;
        std::cin.ignore(); // Clears the input buffer

        if (choice == 1) {
            std::string content;
            std::cout << "Enter ticket description: ";
            std::getline(std::cin, content);
            std::cout << "Assigned Priority: " << getPriority(content) << std::endl;
        } else if (choice == 3) {
            running = false;
        }
    }
    return 0;
}
