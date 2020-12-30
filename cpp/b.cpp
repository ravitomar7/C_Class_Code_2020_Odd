#include<iostream>
using namespace std;
//Declaring and defining a class
class Person
{
public://Access Specifier private: protected

    //States or Member variables
    int id;
    int age;
    char gender;

    //behaviour or Member Functions
    
    void takeinput()
    {
        cout<<"Enter Id";
        cin>>id;
        cout<<"Enter Age";
        cin>>age;
        cout<<"Enter Gender(M/F)";
        cin>>gender;

    }
    
    void display()
    {
      cout<<"*******Person Id"<<id<<" Persin age"<<age<<" Person Gender "<<gender<<"******"<<endl;
  
    }
};

int main()
{
// Create Objcts

Person p1,p2,p3,p4,p5;

p1.takeinput();
p2.takeinput();
p3.takeinput();
p4.takeinput();
p5.takeinput();

p1.display();
p2.display();
p3.display();
p4.display();
p5.display();




// cout<<"Person Id"<<p1.id<<" Persin age"<<p1.age<<" Person Gender "<<p1.gender;
// cout<<"Person Id"<<p2.id<<" Persin age"<<p2.age<<" Person Gender "<<p2.gender;

// p2.gender='M';

// cout<<"Person Id"<<p2.id<<" Persin age"<<p2.age<<" Person Gender "<<p2.gender;



    return 0;
}