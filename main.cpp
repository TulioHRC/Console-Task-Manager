#include <iostream>
#include <string>

int main(){
    std::cout << "\nWelcome, I'm your console task manager." << std::endl;

    std::cout << "\nCommands:\n- a (add new task)\n- v (view task)\n- d (delete task)\n- e (or END the program)" << std::endl;

    std::string input;

    std::cout << "Press enter to start the program..." << std::endl;
    std::getline(std::cin, input);
    input = "";

    std::cout << "\033[2J\033[H";
    while(input != "END" && input != "e"){
        std::cout << "- ";
        std::getline(std::cin, input);
    }

    return 0;
}