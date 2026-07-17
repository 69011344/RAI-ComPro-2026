#include <stdio.h>
int main(){
 int point;
 float son;
 char name[10];
 
 printf("Please enter an integer value:");
 scanf("%d", &point);
 printf("You entered: %d\n", point);
 printf("Please enter a float value:");
 scanf("%f", &son);
 printf("You entered: %0.1f\n", son);
 printf("Please enter a character:");
 scanf(" %[^\n]s", name);
 printf("You entered: %s\n", name);

 return 0;




}