<!-- Global site tag (gtag.js) - Google Analytics -->
<script async src="https://www.googletagmanager.com/gtag/js?id=UA-146817309-1"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'UA-146817309-1');
</script>

# COMMAND LINE ARGUMENTS

## Source Code

```
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
     
   printf("argc: %d\n",argc);
   if ( argc != 3 ) {
      printf("Usage: ./pass_command_line_options arg1 arg2\n");
      printf("where arg1 is an integer and arg2 is a floating point number\n");
      exit(0);
   }
   
   int i;
   for (i=0;i<argc;i++) {
      printf("i: %d argv[i]: %s\n",i,argv[i]); 
   }

   i = 1;
   int myarg_int = 0;
   float myarg_float = 0.0;
   if ( argc > 1 ) myarg_int = atoi(argv[i]);
   ++i; 
   if ( argc > 2 ) myarg_float = atof(argv[i]);

   printf("myarg_int: %d myarg_float: %10.5f\n",myarg_int,myarg_float);

   return 0;

}
```

***
## Result
![result](result.png)

***
## Details
`#include <stdio.h>`, as we all know, is for `printf`.
`#include <stdlib.h>` is for `atoi` and `atof`.

`atoi()` function converts string into 
an integer and returns that integer.

`atof()` converts string into a double, 
then returns that value.

### argc
`argc` captures the number of command line arguments.

```      
   printf("argc: %d\n",argc);
   if ( argc != 3 ) {
      printf("Usage: ./pass_command_line_options arg1 arg2\n");
      printf("where arg1 is an integer and arg2 is a floating point number\n");
      exit(0);
   }   
```

Take note: the executable is 
always the first argument and the remaining arguments
are separated by spaces.
Since we want to require a user to supply two arguments, 
there will be a total of three arguments including the required
executable file. This is inside the `if` block so as to make
sure there will be three arguments inserted or else
the user will be instructed to supply three arguments.  

### argv 
`argv` captures each argument in an array of characters.
Here, we loop over all arguments and print the value:

```
   int i;
   for (i=0;i<argc;i++) {
      printf("i: %d argv[i]: %s\n",i,argv[i]); 
   }
```

### atoi and atof
Since command line arguments are read in as an 
array of characters, they must be converted
to the appropriate type (e.g. int, float),
for further processing:

```
   i = 1;
   int myarg_int = 0;
   float myarg_float = 0.0;
   if ( argc > 1 ) myarg_int = atoi(argv[i]);
   ++i; 
   if ( argc > 2 ) myarg_float = atof(argv[i]);
```

We make `i` with a value of 1. This will be later
used for the increment. Then, `myarg_int` and
`myarg_float` were declared with an initial
value of 0.

Then, there are two `if` blocks. We did not use
the conventional { } since we only have
one command in each `if` block. 
The first test says if `argc`
is greater than 1, which means the user entered
two or more arguments, `myarg_int` will get
the value from the second argument.
That is, at index 1 and is an integer type, 
so, conversion will be done through `atoi`.

Then, `i` will be incremented but using
`++i`. There are several discussions out there for this
increment first then assign or assign first then increment.
But, it depends on the situation yet in this example
where it was used just an index,
it is almost neglible.

Before the second `if` is tested, `i` now has a value of 2.
If ever the user entered the third argument, `if ( argc > 2 )`
will result to true and `myarg_float` will get the value
from the third argument, that is at index 2, which is a float. 
Conversion will be done through `atof`.

***
Next:
[DYNAMICALLY ALLOCATED ARRAYS](../009_dynamically_allocated_arrays)
