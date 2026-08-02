#include <stdio.h>
int main(){
 int count = 1, num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Multiplication table for %d\n", num);

  for (count = 1; count <= 12; count++){
    printf(" %d * %d = %d\n", num, count, num*count);
  }


}