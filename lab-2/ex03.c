#include <stdio.h>
int main(){
 int age;
 float height;
 int weight;
 char name[10];
 char gender[10];
 char education[20];
 
 printf("Enter your name:");
 scanf("%s", name);
 printf("Enter your age:");
 scanf("%d", &age);
 printf("Enter your height:");
 scanf("%f", &height);
 printf("Enter your weight:");
 scanf("%d", &weight);
 printf("Enter your gender:");
 scanf("%s", gender);
 printf("Enter your education qualification:");
 scanf(" %[^\n]s", education);

 printf("Name: %s\n", name);
 printf("Age: %d\n", age);
 printf("Gender: %s\n", gender);
 printf("Height: %.1f\n", height);
 printf("Weight: %d\n", weight);
 printf("Education: %s\n", education);


 return 0;


}