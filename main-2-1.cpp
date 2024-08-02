#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

int main() {
    std::string decimal_number1 = "789";
    std::string decimal_number2 = "123456789";
    std::string decimal_number3 = "0";
    std::string decimal_number4 = "101";
    std::string decimal_number5 = "999999999";
    
    print_binary_str(decimal_number1);
    print_binary_str(decimal_number2);
    print_binary_str(decimal_number3);
    print_binary_str(decimal_number4);
    print_binary_str(decimal_number5);

    return 0;
}
