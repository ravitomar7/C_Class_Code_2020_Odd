#include<stdio.h>



/*
ENter value of n:  5
*
**
***
****
*****

ENter value of n:  7
    *
   ***
  *****
 *******
  *****
   ***
    * 


*/



/*
To find  first n prime numbers  and dispplay their factorial..
Enter Any number: 15


2,3,4,5,6,7,8,9.................Infinty

count=0;
count++;
count<=n


*/

int main()
{
long long int n,i,j=2,k,flag=0,fact=1,count=0;
printf("Enter Any number: ");
scanf("%lld",&n);

// 5!=> 5 x 4 x3 x2 x1 


while(count<n)
{
  flag=0;
            //THIS LINE
            for(i=2;i<j;i++)  //ME   8 2   8  3    8  4    8  5    8  6   8 7
            {
            if(j%i==0)//YOU
            {
            // printf("It is Divisible by %d\n",i);
            flag=1;
            break;
            }

            }

            if(flag==0)
            {
                // printf("\n %d is a Prime Number",j);
                fact=1;
                count++;
                for(k=j;k>0;k--)
                {
                    fact=fact*k;
                }

                printf("The Factorial of Prime Number %lld is %lld\n",j,fact);


//PRIMITIVE DATA TYPES.....int char float double 
// Data Structures.... That is user defined data types...

            }
           
j++;

}


    return 0;
}