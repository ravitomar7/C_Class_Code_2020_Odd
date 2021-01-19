#include<iostream>
using namespace std;

class A
{
protected:
  int x;
A()
{
    x=10;
    cout<<"Object of A is created"<<endl;
}

  
    void display()
    {
        cout<<"hey There I am called"<<endl;
    }

};

class B:protected A
{
   
protected:
 int x;

    public:
          int y;
        B()
        {
            y=20;
            cout<<"Object of B is created";
        }
      
        void greeting()
        {
            cout<<"Greetings from class B"<<endl;
        }

       
};


int main()
{
    // A obj1;
    B obj2;
    obj2.x=60;
    obj2.display();
    

    return 0;
}