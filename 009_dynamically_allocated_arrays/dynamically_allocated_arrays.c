#include <stdio.h> // printf()
#include <stdlib.h> // exit(), atoi(), atof()

int main(int argc, char **argv)
{

   if ( argc != 2 ) {
      printf("Usage: dynamically_allocated_arrays arraySize\n");
      exit(0);
   }

   int n = atoi(argv[1]);

   int *myDynamicArray = malloc( n * sizeof(int) );

   if ( myDynamicArray == NULL ) {
      printf("Allocation failed, exiting!\n");
      exit(0);
   }

   int i;
   for ( i=0; i<n ; i++ ) { 
      myDynamicArray[i] = i * 9;
      printf("i: %d, myDynamicArray[i]: %d\n", i, myDynamicArray[i]);
   }

   free(myDynamicArray);

   return 0;
}