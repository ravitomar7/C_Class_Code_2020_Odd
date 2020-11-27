#include<stdio.h>

//Find weather a number is prime or not?
//A program that prints prime number upto n. starting from 2--n
//A program that prints n prime numbers... 5==>2 3 5 7 11




// n=2,3,4,5,6,7,8,9,10===>Its a  prime number


int main()
{
long long int n,i,temp,flag=0,j=2,count=0,k,fact=1;// DEclration of variable

printf("%lu",sizeof(int));

printf("enter value of n:");
scanf("%lld",&n);



// n=10
    // j=2 3 4 5 6 7 8 9 10
        // for every value of j... i= 2 till j-1
            //for j=8 i= 2 3 4 5 6 7



while(count<n)
{
        flag=0;
        for(i=2;i<j;i++)
        {
        temp=j%i;
        if(temp==0)
        {
            // printf("Divisible by %d\n",i);
            flag=1;
            break;
        }
        else
        {
            // printf("Not Divisible by %d\n",i);
        }
        }

        if(flag==0)
        {
        // printf("It is a Prime number");
       
        count++;

        fact=1;

        for(k=2;k<=j;k++)
        {
            fact=fact*k;
        }

       printf("Prime Number %lld and its Factorial is %lld \n",j,fact);






        }
        else{
            
        // printf("It is NOT a Prime number");

        }
//
j++;
}

}