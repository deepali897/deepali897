#include <stdio.h>
#include <string.h>

void split(char *s, char *d) {
  
    // Get the first substring
    char *ss = strtok(s, d);  
    while (ss != NULL) {
        printf("%s\n", ss);
      
        // Get the next token
        ss = strtok(NULL, d);  
    }
}
int main() {
    char s[] = "Geeks,for,Geeks"; 
    char *d = ",";  

    // Call the function to split and
      // print substrings
    split(s, d);
  
    return 0;
}