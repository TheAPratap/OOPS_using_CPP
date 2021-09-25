//Write a program to implement concept of structure and union
#include <stdio.h>
#include <string.h>

struct bioStructure
{
   char name[15];
   int age;
   char gender;
};

union bioUnion
{
   char n[15];
   int a;
   char gen;
};


int main()
{
  printf("Abhinav Pratap\nA2345920104\nCSE Evening\n");
  //Data Construction
  struct bioStructure a={"Abhinav",19,'M'};

  printf("\nStructure->\n");
  printf("Name: %s\nAge: %d\nGender: %c\n", a.name, a.age, a.gender);


  union bioUnion b={"Abhinav",19,'M'};
  printf("Union->\n");
  printf("Name: %s\nAge: %d\nGender: %c\n", b.n, b.a, b.gen);

  //Size
  printf("Size of Structure: %lu\n", sizeof(a));
  printf("Size of Union: %lu\n", sizeof(b));
  
  //Accessing all members at a time
   printf("\nAccessing all members at a time:\n");
   strcpy(a.name, "Abhinav Pratap");
   a.age=20;
   a.gender='M';
   printf("Structure->\nName: %s\nAge: %d\nGender: %c\n", a.name, a.age, a.gender);

   strcpy(b.n, "Abhinav Pratap");
   b.a=20;
   b.gen='M';
   printf("Union->\nName: %s\nAge: %d\nGender: %c\n", b.n, b.a, b.gen);


   //Accessing one members at a time
   printf("\nAccessing one members at a time:\n");
   strcpy(a.name, "Abhi");
   printf("Structure->\nName: %s\n",a.name);

   a.age=19;
   printf("Age: %d\n",a.age);

   a.gender='M';
   printf("Gender: %c\n",a.gender);

   printf("Union->\n");
   strcpy(b.n, "Abhi");
   printf("Name: %s\n",b.n);
   
   b.a=19;
   printf("Age: %d\n",b.a);

   b.gen='M';
   printf("Gender: %c\n",b.gen);

   printf("\nData Manupalution of one member:\n");
   printf("Structure->\n");
   strcpy(a.name, "Abhinav");
   printf("Name: %s\nAge: %d\nGender: %c\n", a.name, a.age, a.gender);

   printf("Union->\n");
   strcpy(b.n, "Abhinav");
   printf("Name: %s\nAge: %d\nGender: %c\n", b.n, b.a, b.gen);
   return 0;
}