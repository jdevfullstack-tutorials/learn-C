#include <stdio.h>

int main()
{
   
   int n = 10;

   int i;
   int x[n];
   for ( i=0; i<n; i++ ) {
      x[i] = i * 10;
      printf("i: %d x[i]: %d\n", i, x[i]);
   }
  
   int y = 0;
   while ( y < 100 ) {
      y += 12;
      printf("y: %d\n", y);
   }

   y = 0;
   do {
      y += 12;
      printf("y: %d\n", y);
   }
   while ( y < 100 );

   return 0;

}