#include <stdio.h>
#include <string.h>

void print(char *s) {
  
    // Flag to check if it's first letter of a word
    int first = 1;

    // Loop through string character by character
    for (int i = 0; s[i] != '\0'; i++) {
      
        // Check if the current character is a non-space
          // and the start of a word
        if (s[i] != ' ' && first) {
            printf("%c ", s[i]);
            first = 0;        
        }

        // If a space is encountered, set the flag to 1
        if (s[i] == ' ')
            first = 1;
    }
}

int main() {
    char s[] = "Hello Geeks. Welcome to C programming";
  
      // Printing first character of each word in s
    print(s);
    return 0;
}
