#include <iostream>
#include <cmath>

extern bool is_palindrome(int array[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {1}; 
    int array4[] = {}; 
    int array5[] = {1, 2, 2, 1};

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    int length3 = sizeof(array3) / sizeof(array3[0]);
    int length4 = sizeof(array4) / sizeof(array4[0]);
    int length5 = sizeof(array5) / sizeof(array5[0]);

    std::cout << "Sum if palindrome (array1): " << sum_if_palindrome(array1, length1) << std::endl;
    std::cout << "Sum if palindrome (array2): " << sum_if_palindrome(array2, length2) << std::endl;
    std::cout << "Sum if palindrome (array3): " << sum_if_palindrome(array3, length3) << std::endl;
    std::cout << "Sum if palindrome (array4): " << sum_if_palindrome(array4, length4) << std::endl;
    std::cout << "Sum if palindrome (array5): " << sum_if_palindrome(array5, length5) << std::endl;

    return 0;
}
