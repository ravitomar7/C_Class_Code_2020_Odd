#include<iostream>
using namespace std;

class Father
{
    public:
        void sing()
        {
            cout<<"Singing Classical"<<endl;
        }

};

class Son:public Father
{

    public:
        void dance()
        {
            cout<<"See i am dancing!"<<endl;
        }

        void sing()
        {
            cout<<"Doing Rap!!!"<<endl;
        }
};

int main()
{
    Father x;
    Son y;

    x.sing();
    y.dance();
    y.Father::sing();

    return 0;
}