#include <stdio.h>

int main() {
  
    int n = 4;  
    int c = n * (n + 1) / 2;

    // Outer loop to print rows
    for (int i = n; i >= 1; i--) {

        // Inner loop to print the numbers in each row
        for (int j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }

    return 0;
}
