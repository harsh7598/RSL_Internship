#include <stdio.h>

int main(){
    int bool1, bool2;

    printf("Enter the first value : ");
    scanf("%d",&bool1);
    
    printf("Enter the second value : ");
    scanf("%d",&bool2);

    int andResult = bool1 && bool2;
    int orResult = bool1 || bool2;
    int notResult1 = !bool1;
    int notResult2 = !bool2;

    printf("Logical AND : %d\n", andResult);
    printf("Logical OR : %d\n", orResult);
    printf("Logical NOT of  First value : %d\n", notResult1);
    printf("Logical NOT of Second value : %d\n", notResult2);


}