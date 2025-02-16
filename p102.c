#include <stdio.h>
#include <string.h>

int comp(char *s1, char *s2) {

    // Compare characters one by one
    while (*s1 && !(*s1 - *s2)) {
        s1++;
        s2++;
    }
    
      // Returning 0 if strings are equal
      // +ve value if s1 is greater than s2
      // -ve value if s1 is smaller than s2
    return *s1 - *s2;
}

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello";

      // Comparing s1 and s2
    if(!comp(s1, s2))
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
