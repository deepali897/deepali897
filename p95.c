#include <stdio.h>
#include <string.h>

// Function to reverse string using recursion
void revRecursive(char *l, char *r) {
  
      // Till two pointers do not meet, 
     // swap the values they point to
    if (l != r) {
        char c = *l;
        *l = *r;
        *r = c;
      
          // Recursive call
        revRecursive(l + 1, r - 1);
    }
}

// Wrapper function
void rev(char *s) {

    // Calling the recursive function
    revRecursive(s, s + strlen(s) - 1);
}

int main() {
    char s[] = "GeeksforGeeks";

    // Reversing the string s
    rev(s);

    printf("%s", s);
    return 0;
}