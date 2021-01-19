#include<iostream>
using namespace std;

class abc{

private:
     int l,b;

   

public:

 void specialFunction()
    {
        cout<<"I dont know why i am special?";
    }
    void fun(int passcode)
    {
        // cout<<"hey There, See I am printed!"<<endl;
        // cout<<"Len="<<l<<" Breadth="<<b<<endl;
if(passcode==1234)
{
        specialFunction();
}
    }

    abc()
    {
        l=0;
        b=0;
    }

    //Getter and Setter Methods

    void setL(int passcode,int l)//Setter Method
    {

       if(passcode==1234)
       {
        this->l=l;
       }

       else
       {
           cout<<"Invalid Credentials, You can not change it!!";
       }
    }

    int getL(int passcode) //Getter Method
    {
        if(passcode==2222)
        return l;
        else
        {
            cout<<"Invalid passcode"<<endl;
        return 0;
        }
    }
  
};

int main()
{
    abc obj;
    int pass;

    obj.specialFunction();;



//     cout<<"Enter passcode";
//     cin>>pass;

  
//     obj.setL(pass,10);
//   cout<<"Lenth using a getter function is"<<obj.getL(222);
   
//     obj.fun();


    return 0;
}


