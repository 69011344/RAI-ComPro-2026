#include <stdio.h>
int main(){
 float height;
 int age;
 char fullname[20];
 char first_name[15];
 char last_name[15];
 char uni_name[15];
 
 printf("Enter your full name:");
 scanf(" %[^\n]", fullname);
 printf("Enter your age:");
 scanf("%d", &age);
 printf("Enter your height:");
 scanf("%f", &height);
 printf("Enter your University name:");
 scanf("%s", uni_name);
 sscanf(fullname,"%s %s", first_name, last_name);

 printf("Hi! Everyone. This is %c.%s from %s. I am %d years old \n and my height is %.1f cm tall.", last_name[0], first_name, uni_name, age, height);
 return 0;




}