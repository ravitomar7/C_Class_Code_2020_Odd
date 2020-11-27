#include<stdio.h>

union student
{
    int rno;
    float avg;
    double sum;
    // char grade[20];
};


int main()
{
union student s1;



s1.sum=100;
printf("%d %f %f\n",s1.rno,s1.avg,s1.sum);
s1.rno=10;

printf("%d %f %f\n",s1.rno,s1.avg,s1.sum);
s1.avg=50;
printf("%d %f %f\n",s1.rno,s1.avg,s1.sum);
printf("Size of s1 is: %ld",sizeof(s1));

    return 0;
}