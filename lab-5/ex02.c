#include <stdio.h>
int main(){
 int onion[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int reverseonion[10];
 int a=0;
 int b=0;
 int swap;
 for(a=0; a< 10; a++){
    reverseonion[a] = onion[9-a];
    
 }
 printf("Reversed array: ");
 for (b=0; b<10; b++){
  printf("%3d", reverseonion[b]);
 }
 




}