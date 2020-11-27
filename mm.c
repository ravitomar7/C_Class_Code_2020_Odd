#include <stdio.h>
struct product
{
    int prize,quantity,total;
    char product_name[20];
};
int main()
{
    
    struct product s,*prt;
    int sum=0;
    char choice;
    do
    {
     printf("Enter the product name-");
     scanf("%s",s.product_name);
     printf("\n Enter the prize per unit-");
     scanf("%d",&s.prize);
     printf("\n Enter Quantity-\t");
     scanf("%d",&s.quantity);
     sum=(s.prize*s.quantity);
     s.total=sum;
     printf("\nProduct Name-%s",s.product_name);
     printf("\nproduct prize of unit-%d",s.prize);
     printf("\nProduct Quantity\t-%d",s.quantity);
     printf("\nProduct total amount-%d",s.total);
     printf("\n you want to repeat(y/n)-");
     fflush(stdin);
     scanf("%c",&choice);
    }
    while(choice=='y');
    prt=&s;
    printf("\nProduct Name-%s",prt->product_name);
     printf("\nproduct prize of unit-%d",prt->prize);
     printf("\nProduct Quantity\t-%d",prt->quantity);
     printf("\nProduct total amount-%d",prt->total);
    
    return 0;
    
}