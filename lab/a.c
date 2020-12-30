#include<stdio.h>
#include<stdlib.h>

//Self Referential Structure & Calloc Malloc

struct node
{
    int data;
    struct node *next;
};
//Linked List

int main()
{

struct node *p,*start;

p=(struct node *)malloc(sizeof(struct node));
start=p;

p->data=10;

p->next=(struct node *)malloc(sizeof(struct node));
p->next->data=20;

p->next->next=(struct node *)malloc(sizeof(struct node));
p->next->next->data=30;



printf("s1 data is: %d",start->data);
printf("\ns2 data is: %d",start->next->data);
printf("\ns3 data is: %d",start->next->next->data);







//     int *p,n,i=0,*temp;
//     printf("Enter how many values you want to enter?");
//     scanf("%d",&n);

//     p=(int *)calloc(n,sizeof(int));
//     temp=p;
//     while(i<n)
//     {
//         printf("Enter value:");
//         scanf("%d",(temp+i));
//         i++;
//     }
// i=0;
//     while(i<n)
//     {
//         printf("Entered values are: %d", *(temp+i));
//         i++;
//     }





/*
    int a,sum=0,val[100],i=0,query;
    while(a!=0)
    {
        printf("Enter value(Enter 0 to exit): ");
        scanf("%d",&a);
        val[i]=a;
        sum=sum+a;
        i++;
    }
    printf("Sum of entered values is: %d",sum);
    printf("Enter which value you want to see?:");
    scanf("%d",&query);

    printf("Value at %d was %d",query,val[query-1]);
*/
    return 0;

}