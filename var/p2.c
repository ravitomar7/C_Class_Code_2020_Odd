#include<stdio.h>

int a=50;//Global Variable
int count=0;

void demo(); //Declaration
void f1();

int main() //Define Main function
{
    // int a=10; //Local variable
    // printf("\n Value of a in Main is %d",a);//Scope Resolution Operator

      demo();//Calling
       demo();//Calling
        demo();//Calling
         demo();//Calling
          demo();//Calling

          count=500;

          f1();
  
    return 0;
}



void demo()//Defined
{
   
//   static int count=0;// static local variable
   count++;
   printf("\nCounter is %d",count);
   
   
    // int a=20; //Local variable
    // printf("\n Value of a in Demo is %d",a);

    // printf("Something");
}


void f1()
{

    printf("count is %d",count);
}