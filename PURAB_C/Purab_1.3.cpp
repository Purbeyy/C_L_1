#include<stdio.h>
int main(){
float radius, area, circum;
const float PI=3.14;
printf("Enter a radius of a circle:");
scanf("%f",&radius);
area=PI*radius*radius;
circum=2*PI*radius;
printf("Area of circle=%f",area);
printf("\nCircumference of circle=%f",circum);
return 0;
}
