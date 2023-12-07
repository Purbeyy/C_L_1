#include<stdio.h>
#include<math.h>
int main(){
float l,b,a,p;
printf("Enter length and breadth:");
scanf("%f%f",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area of rectangle=%f",a);
printf("\nPerimeter of rectangle=%f",p);
return 0;
}
