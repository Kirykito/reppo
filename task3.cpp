#include <iostream>
#include <cstring>  // для strlen()

int main() {
    const char* str = "Hello, World!";
    
    size_t length = strlen(str);
    std::cout << "Длина строки: " << length << std::endl;
    std::cout << "Строка: \"" << str << "\"" << std::endl;
    
    return 0;
}
