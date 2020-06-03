#include <stdio.h>

typedef struct
{
   char *name;
   int age;
   float height;
   float grades[10];
} student;

void printStruct( student oneStudent )
{
   int i;

   printf("=====================\n");
   printf("Student name: %s\n",oneStudent.name);
   printf("        age: %d\n",oneStudent.age);
   printf("        height: %6.3f\n",oneStudent.height);
   printf("        grades: ");
   for (i=0; i<10; i++) printf("%4.1f ",oneStudent.grades[i]);
   printf("\n");
   printf("=====================\n");

}

void modifyStruct( student *oneStudent )
{
 
   oneStudent->grades[0] = 72.0;
   oneStudent->grades[4] = 81.0;
   oneStudent->grades[6] = 85.0;

}

int main()
{

   student Nikki;
   Nikki.name = "Nikki";
   Nikki.age = 19;
   Nikki.height = 64.75;
   int i;
   for (i=0; i<10 ; i++) {
      Nikki.grades[i] = 98.0;
   }

   printStruct(Nikki);

   modifyStruct(&Nikki);

   printStruct(Nikki);

   return 0;
}
