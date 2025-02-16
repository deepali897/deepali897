#include <stdio.h>

int main() {
    int n = 5;
  
      // Outer loop to print each row
    for (int i = 1; i <= n; i++) {
      
          // Inner loop to print the whitespace and stars
        for (int j = 1; j <= i; j++) {
          
            // Print '*' for first or last column, or last row
              // print whitespaces for the rest
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
