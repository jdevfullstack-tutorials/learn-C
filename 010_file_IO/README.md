<!-- Global site tag (gtag.js) - Google Analytics -->
<script async src="https://www.googletagmanager.com/gtag/js?id=UA-146817309-1"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'UA-146817309-1');
</script>

# FILE INPUT/OUTPUT

## Source Code

```
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp_in;
   fp_in = fopen("input_file.txt", "r");

   if ( fp_in == NULL ) {
      printf("input_file.txt not opened, exiting...\n");
      exit(0);
   }

   int x, y, z;
   int i;
   for (i=0; i<3; i++) {
      fscanf(fp_in, "%d %d %d", &x, &y, &z);
      printf("x: %d y: %d z: %d\n", x, y, z);
   }
   fclose(fp_in);

   FILE *fp_out;
   fp_out = fopen("output_file.txt", "w");
   if ( fp_out == NULL ) {
      printf("output_file.txt not opened, exiting...\n");
      exit(0);
   }

   for ( i=0 ; i < 50 ; i++ ) {
      fprintf(fp_out, "%d %d\n", i, i*10);
   } 
   fclose(fp_out);
   
   printf("`output_file.txt` created successfully.\n");
   
   return 0;
}
```

***
## Result
![result](result.png)

***
## Details
### Reading from a File
An example of reading from a file:

```
   FILE *fp_in;
   fp_in = fopen("input_file.txt","r");
```

It is good practice to check whether the file
was opened successfully. `fopen()` will
fail if the file does not exist:

```
   if ( fp_in == NULL ) {
      printf("input_file.txt not opened, exiting...\n");
      exit(0);
   }
```

And finally, getting the contents of that file through
`fscanf` and closing it right after reading.

```
   int x, y, z;
   int i;
   for (i=0; i<3; i++) {
      fscanf(fp_in,"%d %d %d", &x, &y, &z);
      printf("x: %d y: %d z: %d\n", x, y, z);
   }
   fclose(fp_in);
```

### Writing to a File
Now, an example of writing to a file:

```
   FILE *fp_out;
   fp_out = fopen("output_file.txt", "w");
```

Then, checking whether it was successfully created:

```
   if ( fp_out == NULL ) {
      printf("output_file.txt not opened, exiting...\n");
      exit(0);
   }
```

Then, writing data to this file and closing it after:

```
   for ( i=0 ; i < 50 ; i++ ) {
      fprintf(fp_out,"%d %d\n", i, i*10);
   } 
   fclose(fp_out);
```
***
You have reached the end of this tutorial, 
and we are glad you did. Not all the 
topics were covered here but the important
thing is you get the idea what C is all about.

To demonstrate how C is used in writing
computer programs, please visit this
repository:

<https://github.com/mongAlvarez/CalC>

Thanks a lot!
