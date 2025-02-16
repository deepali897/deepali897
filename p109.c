// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // To store Number in String form.
    char string[10] = "1234567890";
    long integer;
   
    // Base is 10 because we are converting to integer.
    integer = strtol(string, NULL, 10);
    printf("Number is %lu", integer);
}