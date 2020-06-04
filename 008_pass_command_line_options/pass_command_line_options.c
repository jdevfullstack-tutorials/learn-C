#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
     
   printf("argc: %d\n", argc);
   if ( argc != 3 ) {
      printf("Usage: ./pass_command_line_options arg1 arg2\n");
      printf("where arg1 is an integer and arg2 is a floating point number\n");
      exit(0);
   }
   
   int i;
   for (i=0; i<argc; i++) {
      printf("i: %d argv[i]: %s\n", i, argv[i]); 
   }

   i = 1;
   int myarg_int = 0;
   float myarg_float = 0.0;
   if ( argc > 1 ) myarg_int = atoi(argv[i]);
   ++i; 
   if ( argc > 2 ) myarg_float = atof(argv[i]);

   printf("myarg_int: %d myarg_float: %10.5f\n", myarg_int, myarg_float);

   return 0;

}