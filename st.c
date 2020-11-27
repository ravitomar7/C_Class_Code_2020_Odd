#include<stdio.h>

int main()
{

// char a[]="Ravi";

// printf("%d",a[4]); //Null Character \0





int i;
char a[50];// 1 character out of 256 (0-255)

// scanf("%s",a);// Null Character space as a null character
// printf("%s",a);
// printf("%d",a[4]);

gets(a);
puts(a);



for(i=0;i<50;i++)
{
     scanf("%c",&a[i]);
    if(a[i]==10)//enter means 10
     {
         break;
     }
}
    
// for(i=0;i<50;i++)
// {
//      printf("%c",a[i]);
//      if(a[i]==10)
//      {
//          break;
//      }

// }
    

    return 0;
}