#include<stdio.h>
int main(){
int a, b, c;
float d;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum=%d",c);
c=a-b;
printf("\nDifference=%d",c);
c=a*b;
printf("\nProduct=%d",c);
d=a/b;
printf("\nDivision=%f",d);
return 0;
}
