#include<stdio.h>
#define row 2
#define col 5


int main()
{

int a[row][col],i,j;//3x3=9
/*
00 01 02 
10 11 12 
20 21 22


i= 0, 1 ,2
i=> 0,1,2

*/

for(i=0;i<col;i++)
{
    for(j=0;j<row;j++)
    {
        printf("Enter your value for location %d%d :",i,j);
        scanf("%d",&a[i][j]);
    }
}



for(i=0;i<col;i++)
{
    for(j=0;j<row;j++)
    {
        
        printf("%d\t",a[i][j]);
    }

    printf("\n");
}


/*
scanf("%d",&a[0][0]);
scanf("%d",&a[0][1]);
scanf("%d",&a[0][2]);
scanf("%d",&a[1][0]);
scanf("%d",&a[1][1]);
scanf("%d",&a[1][2]);
scanf("%d",&a[2][0]);
scanf("%d",&a[2][1]);
scanf("%d",&a[2][2]);



printf("%d ",a[0][0]);
printf("%d ",a[0][1]);
printf("%d ",a[0][2]);
printf("\n%d ",a[1][0]);
printf("%d ",a[1][1]);
printf("%d ",a[1][2]);
printf("\n%d ",a[2][0]);
printf("%d ",a[2][1]);
printf("%d ",a[2][2]);

*/
}