#include <stdio.h>
#include<stdlib.h>

int main()
{

    int a=8,b;

// b=a X 2 ^ n

// b=a / 2 ^ n


// a=>  000010

    b=a>>2;

    printf("%d",b);
    




//     int *a=NULL, i = 0,sum=0,n;

//     printf("Enter How many values you want to add(max value 1000)?");
//     scanf("%d",&n);

//     // a=(int *)malloc(n*sizeof(int));
//     a=(int *)calloc(n,sizeof(int));


//     do
//     {
//         printf("Enter Value:");
//         scanf("%d", (a+i));//&a[i]
      
//         sum=sum+(*(a+i));
//           i++;
//     } while (i < n);


// printf("Sum of ");
// for(int i=0;i<n;i++)
// {
//     printf("%d +",*(a+i));
// }

// printf("= %d",sum);
    // char a[20];

    // // scanf("%s",a);
    // gets(a);

    // for(int i=0;a[i]!='\0';i++)
    // {
    //     printf("%d",a[i]);
    // }

    // printf("%d",a[4]);

    // printf("%s",a);
}

// {
//     int i=0;
// // char name[]="Ravi Tomar";//"Ravi Tomar\0"

// // printf("%d",name[10]);

// char name[30],address[100];

// // scanf("%s",name); // Ravi\0Tomar

// // printf("%s",name);//Ravi

// gets(name);// ! space as a null chacter//   Ravi Tomar\0

// printf("%s",name);//Ravi Tomar

// // puts(name);

// /*char name[200];//1 byte--->1 character/digit/special character---0-255 ASCI----RenterAEnter(ASCII)

// for(i=0;i<200;i++)
// {
// scanf("%c",name+i);

// if(name[i]==10)
// {
//     break;
// }

// }

// for(i=0;i<200;i++)
// {

// printf("%c",name[i]);
// if(name[i]==10)
// {
//     break;
// }

// */
// // }
//     return 0;
// }