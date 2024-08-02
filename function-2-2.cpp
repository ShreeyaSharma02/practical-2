#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){

    int sum = 0;
    for(int i = 0; i < number_of_digits;i++){

        int number = number_of_digits - i - 1;
        
        if(binary_digits[i] == 1){
        sum = sum + pow(2, number);
        }        
    }
    return sum;
}