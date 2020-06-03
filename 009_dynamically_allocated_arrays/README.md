<!-- Global site tag (gtag.js) - Google Analytics -->
<script async src="https://www.googletagmanager.com/gtag/js?id=UA-146817309-1"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'UA-146817309-1');
</script>

# DYNAMIC MEMORY ALLOCATION USING ARRAYS

## Source Code

```
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
      printf("i: %d, myDynamicArray[i]: %d\n",i,myDynamicArray[i]);
   }

   free(myDynamicArray);

   return 0;
}
```

***
## Result
![result](result.png)

***
## Details
Sometimes you can't predict the size
of an array at compile time, or you need
to grow or shrink the size of an array.
Dynamically-allocated arrays are great
for each of these purposes.

Here, we first test whether a user entered
exactly two arguments, the first argument
being the executable file and the second
argument, the size of an array:

```
   if ( argc != 2 ) {
      printf("Usage: dynamically_allocated_arrays arraySize\n");
      exit(0);
   }
```

Then,
initialize an allocatable array of size `n`.

### malloc()
By standard definition,
`malloc()` returns a pointer to a chunk 
of memory of size *size*, or NULL if there is an error. 
The memory pointed to will be on the heap, not the stack, 
so make sure to free it when you are done with it.

In our case here,
`malloc` reserves a block of memory for the array.
`malloc` needs to know the number of bytes you'd
like to reserve, which you can get by multiplying
the desired size of the array times `sizeof(type)`.

```
   int n = atoi(argv[1]);
   int *myDynamicArray = malloc( n * sizeof(int) );
```

Also, it's good practice to check that the array was
allocated correctly. You do this by checking for
a NULL pointer.

```
   if ( myDynamicArray == NULL ) {
      printf("Allocation failed, exiting!\n");
      exit(0);
   }
```

Then,
fill and access your dynamic array like any
other "normal" array:

```
   int i;
   for ( i=0; i<n ; i++ ) { 
      myDynamicArray[i] = i * 9;
      printf("i: %d, myDynamicArray[i]: %d\n",i,myDynamicArray[i]);
   }
```

As was mentioned, the memory for dynamically allocated arrays must 
be manually released before a program terminates.
Failure to do so can lead to memory leaks.

```
   free(myDynamicArray);
```

***
Next:
[FILE INPUT/OUTPUT](../010_file_IO)
