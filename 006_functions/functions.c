#include <stdio.h>

void printFunctionTest()
{ 
   printf("This function 'printFunctionTest()' only prints, nothing else.\n");
}

float mySimpleFuncByValue(int iloc, float xloc)
{

   iloc += 101;
   xloc *= 14.6;

   float yloc = (float)iloc * xloc;
   
   return yloc;   

}

float mySimpleFuncByReference(int *iPtr, float *xPtr)
{

   *iPtr += 101;
   *xPtr *= 14.6;

   int iloc = *iPtr;
   float xloc = *xPtr;

   float yloc = (float)iloc * xloc;
   
   return yloc;   

}

void modifyArray( int *array )
{

   array[0] = 5;
   array[1] = 12;

}


int main()
{

   printFunctionTest();
      
   int i = 22;
   float x = 234.23;

   float y = mySimpleFuncByValue(i, x);
   printf("i: %d x: %10.5f y: %10.5f\n", i, x, y);   

   y = mySimpleFuncByReference(&i, &x);
   printf("i: %d x: %10.5f y: %10.5f\n", i, x, y);   
	
   int myArray[2] = { 0, 0 };
   printf("Before function call, myArray[0]: %d myArray[1]: %d\n", myArray[0], myArray[1]);
   
   printf("array mem address: %d\n", myArray);
   modifyArray(myArray);
   printf("After function call, myArray[0]: %d myArray[1]: %d\n", myArray[0], myArray[1]);

   return 0;

}