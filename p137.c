#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;

    // Creates a file "demo_file"
    // with file access as write mode
    fptr = fopen("demo_file.txt", "w+");

      // 
    fprintf(fptr, "%s", "GeeksforGeeks");
    fclose(demo);

    return 0;
}
