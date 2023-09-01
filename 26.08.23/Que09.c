#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int numbers[] = {2, 5, 8, 10, 15};

    for (int i = 0; i < 5; i++) {
        int squaredValue = square(numbers[i]);
        printf("Square of %d is %d\n", numbers[i], squaredValue);
    }

    return 0;
}
