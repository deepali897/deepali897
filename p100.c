// C++ program to determine unicode  
// code point at a given index 
#include <stdio.h> 
  
// Driver code 
int main() 
{ 
  char arr[10] = "GeEkS"; 
  int index1 = 0, index2 = 1,  
      index3 = 2, index4 = 3, 
      index5 = 4, code; 
  printf("The String is %s\n", arr); 
  
  code = arr[index1]; 
  printf("The Unicode Code Point At %d is:%d\n",  
          index1, code); 
  code = arr[index2]; 
  printf("The Unicode Code Point At %d is:%d\n",  
          index2, code); 
  code = arr[index3]; 
  printf("The Unicode Code Point At %d is:%d\n",  
          index3, code); 
  code = arr[index4]; 
  printf("The Unicode Code Point At %d is:%d\n",  
          index4, code); 
  code = arr[index5]; 
  printf("The Unicode Code Point At %d is:%d\n",  
          index5, code); 
  return 0; 
}