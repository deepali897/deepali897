#include <stdio.h>

int main() {
    int n = 5;
    int c = 1;

    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {

        // Inner loop to print number in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}