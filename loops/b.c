#include<stdio.h>

/*
a=0
b=1
0,1,1,2,3,5,8.....
c=a+b;
a=b;
b=c;
c=a+b;
a=b;
b=c;
c=a+b;
a=b;
b=c;
c=a+b;
a=b;
b=c;
c=a+b;

*/



int main()
{

int n=0,a=0,b=1,c;

printf("Enter value upto which you want fibonaci series to be printed:");
scanf("%d",&n);

printf("0,1,");

do
{
c=a+b;
printf("%d,",c);
a=b;
b=c;
}while(c<=n);

return 0;
}