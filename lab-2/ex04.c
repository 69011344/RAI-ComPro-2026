#include <stdio.h>
int main(){

 char name[10];
 int student_id;
 float progscore;
 float calcscore;
 float physcore;
 float gpa;
 
 printf("Enter your name:");
 scanf("%s", name);
 printf("Enter your student id:");
 scanf("%d", &student_id);
 printf("Enter your programming score:");
 scanf("%f", &progscore);
 printf("Enter your physics score:");
 scanf("%f", &physcore);
 printf("Enter your calculus score:");
 scanf("%f", &calcscore);

 gpa = (progscore + physcore + calcscore) / 3;

 printf ("Hi %s(%d)! Your GPA is %.2f\n", name, student_id, gpa);
 return 0;




}