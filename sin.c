#include<stdio.h>
#include<math.h>

void swap(int&,int&); //Call by reference..

int main()
{
    int a=10,b=20,c;
    printf("\nBefore a=%d b=%d",a,b);
    
    swap(a,b);   //pass by value method, call by value/.....Pass by Pointers

    printf("\nAfter Swapping a=%d b=%d",a,b);
return 0;
}

void swap(int &a,int &b)//Local Variables 
{
    int c;
    c=a;
    a=b;
    b=c;

        printf("\n In Function a=%d b=%d",a,b);
}



/*
// {
//   double x,ax,ss=0,sin_x=0,t;
//   int i,n,sign=-1;

//   printf("Enter x: ");
//   scanf("%f", &x);
//   printf("Enter n: ");
//   scanf("%d", &n);
//   //converting degree into radian

//   printf("%d",n);
//   ax=x;
//   x = x*(3.14159/180);

//   for(i=1;i<=n;i=i+2)
//   {
//     sign = -sign;
//     t= sign*pow(x,i)/fact(i);
// 		sin_x = t + sin_x;
//   }

//   printf("Sin(%.2lf) Using Functionality: %f", ax,sin_x);
//   ss = sin(x);
//   printf("\nSin(%.2lf) Using Math.h: %f",ax,ss);
}


// int fact(int n)
// {
//   int i,fact=1;
//   for(i=1;i<=n;i++)
//   {
//     fact=fact*i;
//   }

//   return fact;
// }*/