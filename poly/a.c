#include<stdio.h>

int area(int,int);

int area(char);

int main()
{

printf("%d",area(2,2));

printf("%d",area(3,3));

return 0;
}


int area(int a,int b)
{


return a*b;

}


int area(char a)
{

return 2;
}
