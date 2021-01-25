// This is the code for lesson #2 on variables.
//
// https://www.youtube.com/c/linuxmate
//

#include <stdio.h>

int main() {
    int x;
    x = 2;

    int y = 5;
    float z = 2.6f;

    int a = 0, b = 0;

    printf("Value of x:\t %d\n", x);
    printf("Value of y:\t %d\n", y);
    printf("Value of z:\t %.2f\n\n", z);

    printf("Memory address of x:\t %p\n", &x);
    printf("Memory address of y:\t %p\n", &y);
    printf("Memory address of z:\t %p\n\n", &z);

    printf("Type a number to add to 5 : ");

    scanf("%d", &a);

    b = a + 5;

    printf("%d plus 5 equals %d.\n", a, b);
}
