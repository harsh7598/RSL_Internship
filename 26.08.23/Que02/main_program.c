#include <stdio.h>
#include "myheader.h"

int main(){
    int x = 5;
    int y = 3;

    int result = add(x,y);
    printf("The sum of %d and %d is %d", x , y , result);
    return 0;
}