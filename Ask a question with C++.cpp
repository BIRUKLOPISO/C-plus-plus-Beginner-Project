#include <iostream>
#include <string>

int main() {
    std::string answer;

    // Keep asking the question until a valid answer is provided
    while (true) {
        std::cout << "What is the capital city of France? ";
        std::getline(std::cin, answer);

        // Check if the answer is correct
        if (answer == "Paris") {
            std::cout << "Correct! Paris is the capital of France." << std::endl;
            break; // Exit the loop since the answer is correct
        } else {
            std::cout << "Incorrect. Please try again." << std::endl;
        }
    }

    return 0;
}