#include<stdio.h>

int main()
{

int xy1[2],count=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(i!=j)
        {
            xy1[count]=j;
            count++;
        }
    }
}


    printf("Value of x: %d",xy1[0]);
    printf("Value of y: %d",xy1[1]);

    return 0;

}