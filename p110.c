// C Program for Long to  
// String Conversion 
#include <stdio.h> 
#include <string.h> 
  
#define Max_Digits 10 
int main() 
{ 
    long N = 1243; 
    char str[Max_Digits + sizeof(char)]; 
    sprintf(str, "%ld", N); 
    printf("string is: %s \n", str); 
}