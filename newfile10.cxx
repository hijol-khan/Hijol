#include <stdio.h>

int main() {
    int n = -5;

    if (n > 0)
        printf("Positive number");
    else if (n < 0)
        printf("Negative number");
    else
        printf("Zero");

    return 0;
}