#include<stdio.h>


struct date{
    int dd,mm,yy;
};


struct emp{

    char name[20];
    int empid;
    struct date dob;
    struct date joining;
    struct emp *node;

    // int dob_dd,dob_mm,dob_yy;

    // int join_dd,join_mm,join_yy;
};

int main()
{

struct emp e1,e2;
struct emp *ptr=NULL;

ptr=&e1;



printf("Enter Name");
scanf("%s",e1.name);
printf("Enter EID");
scanf("%d",&e1.empid);
printf("Enter DOB Date");
scanf("%d",&e1.dob.dd);
printf("Enter DOB Month");
scanf("%d",&e1.dob.mm);
printf("Enter DOB Year");
scanf("%d",&e1.dob.yy);
printf("Enter Join Date");
scanf("%d",&e1.joining.dd);
printf("Enter Join Month");
scanf("%d",&e1.joining.mm);
printf("Enter Join Year");
scanf("%d",&e1.joining.yy);


printf("%s\n",(*ptr).name);
printf("%s\n",ptr->name);


printf("%d\n",(*ptr).empid);
printf("%d\n",ptr->empid);





    return 0;
}