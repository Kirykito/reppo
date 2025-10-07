#include <iostream>
#include <string>

int main() {
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    std::string str = std::to_string(number);
    
    std::cout << "Number: " << number << std::endl;
    std::cout << "Line: \"" << str << "\"" << std::endl;
    std::cout << "Line lenght: " << str.length() << std::endl;
    
    return 0;
}
