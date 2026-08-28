#include <stdio.h>
#include <math.h>
int main(){
    int i,j;
    float loc;
    struct coords{
        float x,y;
    };
    struct coords pt[2];
    
    for (i=0;i<2;i++){
        printf("x%d : ", i+1);
        scanf("%f", &pt[i].x);
        printf("y%d : ", i+1);
        scanf("%f", &pt[i].y);
    }
    loc = sqrt((pow(pt[1].x-pt[0].x, 2))+(pow(pt[1].y-pt[0].y, 2)));
 printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)", pt[0].x, pt[0].y, pt[1].x, pt[1].y, loc);






}