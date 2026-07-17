#include <stdio.h>

int main () {
 int v1;
 int v2;
 int v3;
 float avgv;
 int vsum;
 int minv;
 int maxv;

 printf("Enter Integer #1:");
  scanf("%d",&v1);
 printf("Enter Integer #2:");
  scanf("%d",&v2);
 printf("Enter Integer #3:");
  scanf("%d",&v3);

  avgv = (v1 + v2 + v3) / 3.0;
  vsum = v1 + v2 + v3;

  if (v1 < v2 && v1 < v3) {
    minv= v1;
  }
  if (v2 < v1 && v2 < v3){
    minv= v2;
  }
  if (v3 < v1 && v3 < v2){
    minv= v3;
  }

  if (v1 > v2 && v1 >v3){
    maxv = v1;
  }
  if (v2 > v1 && v2 > v3){
    maxv = v2;
  }
  if (v3 > v1 && v3 > v2){
    maxv = v3;
  }

  printf("Results\n Minimum:%d\n Maximum %d\n Sum :%d\n Average: %.2f\n", minv, maxv, vsum, avgv);

}