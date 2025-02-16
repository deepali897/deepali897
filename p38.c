//simple pyramid
#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop for printing rows
    for (int i = 0; i < n; i++) {

        // Inner loop for printing * in each rows
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}