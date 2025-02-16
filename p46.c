#include <stdio.h>

int main() {
    int n = 5;

    // Loop for printing each row
    for (int i = 0; i < n; i++) {
      
          // Inner loop for prinitng stars * and whitespaces
        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}