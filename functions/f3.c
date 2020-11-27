#include<stdio.h>

void addition(int,int);//declaration

int main() 
{int temp;
 int a,b;

    printf("Ravi Says: Enter Value of a:");
    scanf("%d",&a);

    printf("Ravi Says: Enter Value of b:");
    scanf("%d",&b);



printf("Ravi called Shantanu.....\n");
addition(a,b);



    return 0;
}


void addition(int a,int b)
{
int sum;

    sum=a+b;
printf("Shantanu Says: Addition is: %d",sum);
    // return sum;

    

}