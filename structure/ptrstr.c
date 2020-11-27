#include<stdio.h>

struct student{
    int p,c;
};
int main()
{

    struct student s1;
    struct student *ptr;

    s1.p=50;
    s1.c=60;

    ptr=&s1;

    printf("\n Phy=%d and Chem=%d",s1.p,s1.c);

    (*ptr).p=70;
    (*ptr).c=40;

    printf("\n Phy=%d and Chem=%d",s1.p,s1.c);

    ptr->p=80;
    ptr->c=90;


     printf("\n Phy=%d and Chem=%d",s1.p,s1.c);



    return 0;
}