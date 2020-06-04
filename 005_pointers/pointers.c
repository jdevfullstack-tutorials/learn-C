#include <stdio.h>

int main()
{

  int i = 1; 

  int *iPtr;
  iPtr = &i;

  printf("Memory address of i: %p\n", &i);
  printf("iPtr: %p\n", iPtr);
  printf("But, iPtr has its own address: %p\n", &iPtr);
  
  printf("Getting the value the pointer points to using * :\n");
  printf("i = %d, *iPtr = %d\n", i, *iPtr);
  printf("Changing the value directly using a pointer:\n"); 
  *iPtr = 2;
  printf("After using \"*iPtr = 2;\", i is now %d\n", i);

  return 0;

}