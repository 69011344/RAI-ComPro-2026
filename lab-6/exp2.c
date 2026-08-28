#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
 int i,j;
   struct students{
    char name[20];
    int age;
 } ;
 struct students student[10];

 for(i=0;i<10;i++){
    printf("Enter students %d name: ", i+1);
    scanf("%s", student[i].name);
    printf("Enter students %d age: ", i+1);
    scanf("%d", &student[i].age);
 }

 for (j=0; j<10; j++){
    if(student[j].age > 20){
        printf("Student %d, %s is older than 20 years old, their age is %d\n", j+1,student[j].name, student[j].age);
    }
 }










}