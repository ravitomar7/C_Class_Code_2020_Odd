#include<iostream>
using namespace std;



class abc
{

 int a;
 public:

 abc(){
     a=10;
 }
 ~abc(){
     cout<<"bye";
 }


    void disp()
    {
        cout<<a;
    }

    friend void see(abc);
   
};

void see(abc obj)
{
    printf("Working");
    cout<<obj.a;
}

class def: private abc{


public:

void display()
{
    cout<<"Hello";
}
};

int main()
{
    abc obj;
    // obj.a=20;
    def oo;
    // oo.a=50;
    oo.display();
    // oo.disp();
    // oo.xyz::display();
    
    see(obj);
    return 0;
}