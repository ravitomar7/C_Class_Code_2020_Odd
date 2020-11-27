#include<stdio.h>

struct a{
    int a,b,c;
    float d;
    
};

union b{
    int a,b,c;
    float d;
    
};

void main()
{
    struct a x;
    union b y;

    printf("a=%d",sizeof(x));
    printf("b=%d",sizeof(y));
}