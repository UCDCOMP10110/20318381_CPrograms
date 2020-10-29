#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct Student{
 char Name[50];
 char Major[50];
 int  Gpa;
 int  age;
};


int main()
{

struct Student Student1;
 Student1.age = 22;
 Student1.Gpa = 4.0;
 strcpy(Student1.Name, "Brian");
  strcpy(Student1.Major, "Computer_Science");

printf("%d", Student1.Gpa);
return 0;

}
