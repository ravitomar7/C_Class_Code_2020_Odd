#include<stdio.h>

int main()
{

// int a=10,b=0; //declared and initialized


// Table  a->Some adress 1001-->23432
//20=> scanf("%d",&a); &=> adress of

// printf("%d",sizeof(char));

// printf("Adress of a= %u \n",&a);
// printf("Value of a= %d \n",a);

// printf("Adress of b= %u \n",&b);
// printf("Value of b= %d\n",b);


int a[10];//=> a[0],a[1]==?1--n-1
int i;
//  base adress==

// a[0]=0;//a=0;
// a[1]=19;//b=19



printf(" Base Adress a= %u \n",a);
// A=3974154832 +1 =3974154833    a+1  => a+5*sizeof(int)
printf(" What is this???  A : %u \n",a+1);
printf(" What is this???  B : %u \n",a+2);
printf(" What is this???  C : %u \n",a+5);


for(i=0;i<10;i++)
{
    a[i]=0;//init
printf("Adress of a[%d]= %u \n",i,&a[i]);
printf("Value of a[%d]= %c \n",i,a[i]);
}

// printf("Adress of a[1]= %u \n",&a[1]);
// printf("Value of a[1]= %d\n",a[1]);



}