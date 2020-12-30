#include<iostream>
using namespace std;

class Person  
{
    public://access specifiers
        //State or member variables

        int id;
        int age;
        char gender;

        //behaviour to it

        void input()
        {
        cout<<"Enter Id";
        cin>>id;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter Gender";
        cin>>gender;

        }

        void output()
        {
             cout<<"Id is "<<id<<" Age is: "<<age<<" Gender is"<<gender<<endl;
        }

};




int main()
{
    Person p1,p2,p3,p4,p5,p6;//2 objects created

   p1.input();
   p2.input();
    p3.input();
   p4.input();
    p5.input();
   p6.input();


   p1.output();
   p2.output();
   p3.output();
   p4.output();
   p5.output();
   p6.output();



    return 0;
}