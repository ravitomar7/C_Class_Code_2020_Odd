#include<stdio.h>

int main()
{

int a,b,i;

// scnaf("%d",&a)  ==>  scanf("%d",&a[0]);
// printf("Address of a is %u \n address of b is %u",&a,b);

int arr[10],sum=0;
//if it is an array so, arr+sizeof(int)*1
arr[0]=10;
arr[1]=20;
printf("Base adress is: %u",arr);//---> a[0]
printf("\nBase adress is: %u",&arr[0]);//---> a[0]
printf("\nvalue of arr[0] is: %d",arr[0]);
//Array Airthmetic..+ -
printf(" adress of a[1] is: %u",*(arr+1));//---> &a[1]
printf("\nvalue of arr[1] is: %d",arr[1]);






// int arr;

// arr[0]=10;
// arr[1]=20;
// arr[2]=30;

// printf("Size of Operator example: %d",sizeof(double));

// for(i=0;i<10;i++)
// {
// printf("Enter %d value:",i+1);
// scanf("%d",&arr[i]);
// }

// for(i=0;i<10;i++)
// {
// sum=sum+arr[i];    
// printf("\nEntered %d value is: %d",i+1,arr[i]);

// }

// printf("Sum is %d and average is %d",sum,sum/10);


// // printf("\nValue : %u",arr[0]);

// // printf("\nAdress of arr is: %u",arr);



}