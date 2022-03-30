#include <stdio.h>

int main (){

    double rainfall[5][2] = {
        {2010, 32.4},
        {2011, 37.9},
        {2012, 49.8},
        {2013, 44.0},
        {2014, 32.9}
    };


    double average = 0;
    double var = 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            if (j == 1){
                average += rainfall[i][j];
            }
        }
    }
    average /= 5;
    printf("Average %.2lf", average);






    return 0;
}