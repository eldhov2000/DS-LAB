#include<stdio.h>

struct Student
{

 int rollno:
 char name[20];
 float mark;
 };
 
 inta main()
 {
  struct Student s;
  
  printf("Enter roll number:");
  scanf("%d",&s.rollno);
  
  printf("Enter name:");
  sacnf("%19s",s.name);
  
  printf("Enter Mark:");
  scanf("%f",&s.mark);
  
  printf("\nStudent Details\n");
  printf("Roll Number:%d\n",s.rollno);
  printf("Name:%s\n",s.name);
  printf("Mark:%2f\n",s.mark);
  
  return 0;
  }
