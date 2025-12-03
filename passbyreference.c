#include <stdio.h>

void sumByReference(int *a, int *b, int *sum) {
    *sum = *a + *b;   // stores result in the variable pointed by sum
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sumByReference(&x, &y, &result);

    printf("Sum using Pass by Reference = %d\n", result);

    return 0;
}
