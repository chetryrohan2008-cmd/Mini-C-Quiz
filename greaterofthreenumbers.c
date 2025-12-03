#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b && a>c) {
        printf("Greater Number= %d",a);
    }
    else if (b>a && b>c) {
        printf("Greater Number=%d",b);
    }
    else {
        printf("Greater Number=%d",c);
    }

    return 0;
}
