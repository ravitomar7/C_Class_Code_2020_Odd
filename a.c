#include<stdio.h>
#include<stdlib.h>
int main()



{

int *ptr;

ptr=(int *)calloc(2,4);

//*ptr=10;
//*(ptr+1)=20;


printf("%d",*ptr);
printf("    %d",*ptr+1);



/*:");
    scanf("%d",&n);

//Exit Controlled
do{
    printf("Hello");
}while(n>i);


// //Entry Controlled
//     while(n>i)
//     {
//         printf("hello");
//     }

*/
// printf("I have printed hello %d times",count);
    return 0;
}
