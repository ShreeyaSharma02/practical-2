#include <iostream>

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {-10, -20, 5, 10, 15}; 
    int array3[] = {7}; 
    int array4[] = {}; 
    int array5[] = {10, 10, 10, 10};

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    int length3 = sizeof(array3) / sizeof(array3[0]);
    int length4 = sizeof(array4) / sizeof(array4[0]);
    int length5 = sizeof(array5) / sizeof(array5[0]);

    std::cout << "Sum min max (array1): " << sum_min_max(array1, length1) << std::endl;
    std::cout << "Sum min max (array2): " << sum_min_max(array2, length2) << std::endl;
    std::cout << "Sum min max (array3): " << sum_min_max(array3, length3) << std::endl;
    std::cout << "Sum min max (array4): " << sum_min_max(array4, length4) << std::endl;
    std::cout << "Sum min max (array5): " << sum_min_max(array5, length5) << std::endl;

    return 0;
}
