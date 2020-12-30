#include<iostream>
using namespace std;

class Person
{

public:




Person(){//default construtor
    //body of constructor

cout<<" See I am Called and I am now creating a Person object for you"<<endl;
    id=0;
    age=0;
    gender='M';
}


// Parameterized Constructor
Person(int a,int b,char c)
{
    cout<<"Creating new person with these values"<<a<<" "<<b<<" "<<c;
    id=a;
    age=b;
    gender=c;
}



~Person()//Destructor ~same class name()
{
    cout<<"I am destroying the memory allocated";
}



//State or Member variables
    int id;
    int age;
    char gender;


//behaviour or methods
void display()
{
    cout<<"Id is"<<id<<" Age is "<<age<<" Gender is "<<gender<<endl;
}

void input()
{
    cout<<"enter id";
    cin>>id;
    cout<<"enter age";
    cin>>age;
    cout<<"enter gender";
    cin>>gender;
}

};


int main()
{



Person p1,p2;
Person p3=Person(7,21,'F');//Calling Part

p1.display();
p2.display();
p3.display();

    return 0;
}
