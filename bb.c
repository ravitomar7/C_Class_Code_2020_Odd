#include<stdio.h>


// return_type Function_name(Formal Parameters)
//Declared


int input();
int process(int);
void output(int);


int main()
{

int n,res;

n=input();
res=process(n);
output(res);


    return 0;
}


//Define the functions



int input()
{
    int n;
printf("Enter value of n:");
scanf("%d",&n);
return n;

}


int process(int n)
{
    int res;
 res=2*n;

return res;

}

void output(int res)
{
 printf("Result is:%d",res);

}

