#include <stdio.h>

int main(){
    int temperatures[7] = {28,30,31,23,32,27,28};

    int sum = 0;
    for(int i = 0; i<7;i++){
        sum += temperatures[i];
    }

    float average = (float)sum / 7.0;

    printf("Average temperature for the week is : %.2f\n", average);
    return 0;
}