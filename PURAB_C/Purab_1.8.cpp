#include<stdio.h>
#include<math.h>
int main(){
float n,m,ans;
printf("Enter a number and its power:");
scanf("%f%f",&n,&m);
ans=pow(n,m);
printf("%f raised to the power %f is %f",n,m,ans);
return 0;
}
