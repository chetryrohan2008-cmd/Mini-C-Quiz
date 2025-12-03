#include <stdio.h>

int sumByValue(int a, int b) {
    return a + b;   // returns the sum
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = sumByValue(x, y);

    printf("Sum using Pass by Value = %d\n", result);

    return 0;
}
