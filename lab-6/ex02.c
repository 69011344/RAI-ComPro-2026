#include <stdio.h>
#include<string.h>
int main(){
 int i,j,k,num;
    struct prf{
        char name[20];
        int age;
        float score;
    } ;
      struct prf st[3], high;
      high.score = 0;
  for(i=0;i<3;i++){
    printf("Student %d's name is: ", i+1);
    scanf("%s", st[i].name);
    printf("Student %d's age is: ", i+1);
    scanf("%d", &st[i].age);
    printf("Student %d's score is: ", i+1);
    scanf("%f", &st[i].score);
  }
  for(j=0;j<3;j++){

    if(high.score < st[j].score){
      high.score = st[j].score;
      strcpy(high.name, st[j].name);
      high.age = st[j].age;
      num = j+1;
    }
  }
  printf("The student with the highest score is student %d, their name is \"%s\", their age is %d, their score is %.1f\n", num, high.name, high.age, high.score);
}
