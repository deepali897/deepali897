#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to iterate through each row
    for (int i = 0; i < n; i++) {

        // First inner loop to print white spaces
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");

        // Second inner loop to print number in each row
        for (int k = 0; k < n; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}