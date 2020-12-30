#include<stdio.h>
// static int b=10;
// int a=30;//Global Variable

void demo(); //Declaration


int main()//Main defination
{
//     int a=10;//Local Varaible

//     printf("\na in main=%d",::a);//Scope Resolution Operator
// demo();

demo();
demo();
demo();
demo();

    return 0;
}


void demo()//Demo Defination
{

     static int count=0;
    count++;
    printf("Count = %d \n",count);

    //   int a=20;//Local VariABLE

    // printf("\na in demo=%d",a);



}


