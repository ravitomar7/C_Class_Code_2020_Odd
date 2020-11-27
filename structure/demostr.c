#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int p,c,m,sum;
    float per;
};

int main()
{
    int i;
struct student s[600];

for(i=0;i<1;i++)
{
printf("Enter Name: ");
// gets(s1.name);
scanf("%s",s[i].name);
printf("Enter Phys: ");
scanf("%d",&s[i].p);
printf("Enter Chem: ");
scanf("%d",&s[i].c);
printf("Enter Maths: ");
scanf("%d",&s[i].m);
s[i].sum=s[i].p+s[i].c+s[i].m;
s[i].per=s[i].sum/3;

printf(" Start Alphabet Name %c Phy %d Chem %d Maths %d Sum %d Per %f",s[i].name[0],s[i].p,s[i].c,s[i].m,s[i].sum,s[i].per);
}

    return 0;
}