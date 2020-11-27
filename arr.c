#include<stdio.h>

int main()
{

    int a[3][3];

    printf("\n%ld",&a[0][0]);
     printf("\n%ld",&a[0][1]);
      printf("\n%ld",&a[1][0]);
       printf("\n%ld",&a[1][1]);

       printf("\n%ld",&a[2][0]);
    
    printf("\n%ld",*(a+2));

    // *(*(a+i)+j)
}