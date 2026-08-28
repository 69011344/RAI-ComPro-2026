#include <stdio.h>
int main(){
 int i,j,k;
    struct prf{
        char name[20];
        int age;
        float score;
    } ;
      struct prf st[3];
  for(i=0;i<3;i++){
    printf("Student %d's name is: ", i+1);
    scanf("%s", st[i].name);
    printf("Student %d's age is: ", i+1);
    scanf("%d", &st[i].age);
    printf("Student %d's score is: ", i+1);
    scanf("%f", &st[i].score);
  }
  for(j=0;j<3;j++){
    printf("Student %d's name is \"%s\", their age is %d, their score is %.1f\n", j+1, st[j].name, st[j].age, st[j].score);
  }
}