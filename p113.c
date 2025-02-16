// C program to demonstrate conversion of
// octal to decimal using format specifier
#include <stdio.h>
 
// Driver code
int main()
{
    int n;
    printf("Enter an Octal number: \n");
    scanf("%o", &n);
   
    // printing the result
    printf("\nDecimal Representation is: %d", n);
    return 0;
}