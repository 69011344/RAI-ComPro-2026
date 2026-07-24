#include <stdio.h>
#include <math.h>
int main(){
 int cone_height,base_radius;
 float volume;
printf("Enter cone height : ");
scanf("%d", &cone_height);
printf("Enter base radius : ");
scanf("%d", &base_radius);

volume = ( (1.0 / 3.0) * 3.1415 * (base_radius*base_radius) * cone_height);

printf("Cone volume = %.1f""\n", volume);

if (volume > 260)
 printf("This cone is perfect for Supun project");
else 
 printf("This cone is not fit for Supun project");






}