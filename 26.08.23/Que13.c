#include <stdio.h>

int main(){
    int num = 42;
    int *ptr;

    ptr = &num;

    printf("Value of num : %d\n", num);
    printf("Value using pointer : %d\n",ptr);
    return 0;
}