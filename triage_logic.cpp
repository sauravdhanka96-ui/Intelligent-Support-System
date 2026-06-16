#include <iostream>
#include <string>

// Function to classify ticket priority based on keywords
std::string getPriority(const std::string& content) {
    if (content.find("urgent") != std::string::npos || content.find("critical") != std::string::npos) {
        return "High";
    } else if (content.find("help") != std::string::npos || content.find("issue") != std::string::npos) {
        return "Medium";
    }
    return "Low";
}

int main() {
    std::string sampleTicket = "My system is down and it is critical!";
    std::cout << "Priority for '" << sampleTicket << "' is: " << getPriority(sampleTicket) << std::endl;
    return 0;
}
