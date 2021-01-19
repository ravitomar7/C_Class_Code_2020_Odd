#include<iostream>
using namespace std;

class Person
{

    int id;
    int age;
    char gender;
      

public:
  Person(int id,int age,char gender)//Parameterized Constructor
    {//special pointer variable called as *this
        this->id=id;
        this->age=age;
        this->gender=gender;
    }

    ~Person()
    {
        cout<<"Deleting the Object!";
    }


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
        cout<<"Id"<<id<<"Age"<<age<<" Gender"<<gender<<endl;
    }

};

int main()
{
    Person p1=Person(1,21,'M');
    Person p2=Person(2,23,'F');

    p1.output();
    p2.output();

    return 0;
}