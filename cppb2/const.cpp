#include<iostream>
using namespace std;

class Person //Blueprint
{
    public: //Access Specifier
        int id; //Member Variables or States
        int age;
        char gender;

    

    Person()//Default Constructor
    {
        cout<<"See I am created by default constructor"<<endl;
        id=0;
        age=0;
        gender='F';
        //Add logic where i can load my variables even from files...
    }


     Person(int a,int b,char c)//parameterized Constructor
    {
        cout<<"See I am called in parameterized constructor"<<endl;
        id=a;
        age=b;
        gender=c;
        //Add logic where i can load my variables even from files...
    }

    ~Person()
    {
        cout<<"See i am getting deleted"<<endl;

        //Add logic here to store temporary varoables values to the persistent storage..
    }

//Behaviours or Functions
    void input()
    {
        cout<<"Enter Id";
        cin>>id;
        cout<<"Enter Age";
        cin>>age;
        cout<<"Enter Gender";
        cin>>gender;
    }

    void output()
    {
        cout<<"Age is"<<age<<" Id is"<<id<<" Gender is "<<gender<<endl;
    }
};

int main()
{

    Person p1=Person(1,12,'F');
    Person p2=Person(2,21,'M');
    Person p3=Person(3,22,'M');
    Person p4;

    // p1.output();
    // p2.output();
    // p3.output();
    // p4.output();

    return 0;
}