// C program to convert the given char to int using
// ASCII values
#include <stdio.h>

int main() {
  
    // Define a numeric character variable
    char ch = '7';

    // Convert the character to integer by subtracting
      // ASCII value of '0'
    int N = ch - '0';

    // Print the result
    printf("The integer value of character '%c' is %d\n", ch, N);

    return 0;
}