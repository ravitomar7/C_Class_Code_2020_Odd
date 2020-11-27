#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct date
{
   int dd,mm,yy;
};

struct employee
{

int id;
char name[20];
struct date dob,doj;

};

int main()
{
struct employee e1;
strcpy(e1.name,"ABC");
e1.id=10;
e1.dob.dd=12;
e1.dob.mm=11;
e1.dob.yy=1990;

e1.doj.dd=19;
e1.doj.mm=11;
e1.doj.yy=2020;

e1.ddjoin=19;
e1.mmjoin=11;
e1.yyjoin=2020;
e1.dddob=12;
e1.mmdob=11;
e1.yydob=1990;

printf("Employee details are Id: %d Date of Joining %d- %d-%d Name: %s",e1.id,e1.dd,e1.mm,e1.yy,e1.name);

}



// a=10;
// b=20;
// ptr=&a;

// *ptr=30;

// printf("%d %d",*ptr,b);
// printf("%d %d",*ptr,b);
// printf("%d %d",*ptr,b);
// printf("%d %d",*ptr,b);





// }
// // {
//   int n;

//    int *ptr=NULL;
// scanf("%d",&n);5
// ptr=(int *)malloc(40);
//    ptr=(int *)calloc(n,sizeof(int);
//     ptr=(int *)calloc(10,4);


// //    // printf("%d",*ptr);//what is at 1001

// // //    *(ptr)=10;// at 1001+1=1005 store 20
// //    printf("%d",*(ptr+5));//what is at 1005

// // //  *(ptr+1)=20;//at 1009 store 30
// // //    printf("%d",*(ptr+1));//what is at 1009

// // // for(int i=0;i<10;i++)
// // // {
// // //    *(ptr+i)=100+i;
// // //    printf("\n%d",*(ptr+i));
// // // }


