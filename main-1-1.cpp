#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int diagonal_sum = sum_diagonal(matrix);

    std::cout << "The sum of the main diagonal is: " << diagonal_sum << std::endl;

    return 0;
}