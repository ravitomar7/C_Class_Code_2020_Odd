#include<iostream>
using namespace std;

class abc{

public:

    int l,b;

    void area()
    {
        cout<<"Area is"<<l*b;
    }

    abc(int len,int breadth){

        this->l=l;//Ambiguity
        this->b=b;

        cout<<"address within the constructor"<<this<<endl;
}

};

int main()
{

abc obj=abc(5,5);//Creation of object using parameterized constructor
obj.area();
cout<<"address within the main for first object"<<&obj<<endl;

abc obj2=abc(15,15);//Creation of object using parameterized constructor
obj2.area();
cout<<"address within the main for first object"<<&obj2<<endl;

    return 0;
}