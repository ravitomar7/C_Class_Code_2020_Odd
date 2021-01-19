#include<iostream>
using namespace std;

class A
{
private:
int personal=10;

public:


friend int goodfriend(A);//Declaration

A()
{
    cout<<"Creating object of class A"<<endl;
}

    void display()
    {
        cout<<"Hello from A"<<endl;
    }

};


int goodfriend(A obj){
    return obj.personal;
}

class B:public A
{   
    public:

    B(){
        cout<<"Creating Object of  class B"<<endl;
    }

    void greeting()
    {
        
        cout<<"Greetings from B"<<endl;
    }

    void display()
    {
        cout<<"This is v2 of hello from A"<<endl;
    }

    



};




int main()
{
  A obj;
  cout<<goodfriend(obj);
    return 0;
}