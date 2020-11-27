#include<stdio.h>




// 3 Parts of function : Ethical Way of doing it
// 1. Declaration
// 2. Calling
// 3. Defination

// 1. Declare + Define.
// 2. Calling

// return_type function_name (Formal parameters)

void print_hello();//Declaring a Function

void Welcome();//declared
void Thanking();
void Performance();
void Singing();
void demo_fun();

int sum(int,int);//Declared TYPE 2

int main()//Defination
{
int result;


int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);

    printf("MAIN FUNCTION Adress of a is %ld and adress of b is %ld",&a,&b);
    result=sum(c,d);//Calling it

 printf("Sum is: %d",result);



// demo_fun();
// // Welcome();
// // Performance();
// // Thanking();
// // Singing();
// // Singing();
// // Welcome();

return 0;
}


int sum(int a,int b)//Defining it!
{
    int addition;
    printf("\nSUM FUNCTION Adress of a is %ld and adress of b is %ld",&a,&b);
    addition=a+b;
    return addition;
    

}


void demo_fun()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Your Name is: %s",name);
}


void Welcome(){

    printf("Someone will Say wwelcome all!");
    printf("Shower flowers on guest!");
}

void Performance(){

    printf("Presented some dance");
}

void Thanking(){
    printf("BBye and tahnks for coming");
}

void Singing(){

    printf("I am singing now...");
}
