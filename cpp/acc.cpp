#include<iostream>
using namespace std;

class Person
{

    int id;
    int age;
    char gender;
      

public:
  Person()
    {
        id=0;
        age=0;
        gender='M';
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
    Person p1,p2;

    p1.input();
    p2.input();

    p1.output();
    p2.output();

    return 0;
}