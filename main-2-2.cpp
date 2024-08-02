#include <iostream>
#include <cmath>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary1[5] = {1, 0, 1, 0, 1}; 
    int binary2[8] = {1, 0, 0, 0, 0, 0, 1, 1}; 
    int binary3[1] = {1}; 
    int binary4[4] = {1, 0, 0, 1};
    int binary5[6] = {1, 1, 0, 1, 0, 1};

    std::cout << "Binary 1 (10101) to integer: " << binary_to_int(binary1, 5) << std::endl;
    std::cout << "Binary 2 (10000011) to integer: " << binary_to_int(binary2, 8) << std::endl;
    std::cout << "Binary 3 (1) to integer: " << binary_to_int(binary3, 1) << std::endl;
    std::cout << "Binary 4 (1001) to integer: " << binary_to_int(binary4, 4) << std::endl;
    std::cout << "Binary 5 (110101) to integer: " << binary_to_int(binary5, 6) << std::endl;

    return 0;
}
