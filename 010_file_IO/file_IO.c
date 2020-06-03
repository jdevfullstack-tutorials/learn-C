#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp_in;
   fp_in = fopen("input_file.txt","r");

   if ( fp_in == NULL ) {
      printf("input_file.txt not opened, exiting...\n");
      exit(0);
   }

   int x,y,z;
   int i;
   for (i=0; i<3; i++) {
      fscanf(fp_in,"%d %d %d",&x,&y,&z);
      printf("x: %d y: %d z: %d\n",x,y,z);
   }
   fclose(fp_in);

   FILE *fp_out;
   fp_out = fopen("output_file.txt","w");
   if ( fp_out == NULL ) {
      printf("output_file.txt not opened, exiting...\n");
      exit(0);
   }

   for ( i=0 ; i < 50 ; i++ ) {
      fprintf(fp_out,"%d %d\n",i,i*10);
   } 
   fclose(fp_out);
   
   printf("`output_file.txt` created successfully.\n");
   
   return 0;
}
