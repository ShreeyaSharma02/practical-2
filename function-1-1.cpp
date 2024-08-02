#include <iostream>
#include <cmath>

int sum_diagonal(int array[4][4]){
    int rows = 4;
    int columns = 4;
    int sum = 0;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(i==j){
                sum = sum + array[i][j];
            }
        }
    }
    return sum;
}