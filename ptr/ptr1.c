#include<stdio.h>
#include<stdlib.h>

struct abc{
    int a,b;
};

int main()
{
    struct abc x,*p;

    x.a=10;
    x.b=20;

    printf("a=%d b=%d",x.a,x.b);

    p=&x;

    printf("\na=%d b=%d",(*p).a,(*p).b);

      printf("\na=%d b=%d",p->a,p->b);


    // int a=10;

    // int *q;
    // q=(int *)malloc(4);
    // *q=10;

    // int *p;// a int-> 4 bytes==>1001

    // p=malloc(sizeof(int)*10);//2001 utp 2041
    // *p=10; //a[0]=10;
    // printf("%d",*p);

    // *(p+1)=20; //a[1]=10;// 1005==>special value 1

    // printf("%d",*(p+1));

    // *(p+2)=30; //a[2]=10;  1001+4*200....TSR's 

    // printf("%d",*(p+2));


}