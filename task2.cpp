#include <iostream>

int main() {
    int number;
    
    std::cout << "Введите число: ";
    std::cin >> number;
    
    if (number > 0) {
        std::cout << "Число " << number << " положительное" << std::endl;
    } else if (number < 0) {
        std::cout << "Число " << number << " отрицательное" << std::endl;
    } else {
        std::cout << "Число равно нулю" << std::endl;
    }
    
    return 0;
}

