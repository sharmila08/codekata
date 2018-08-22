#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;
};
class derived:public base
{
    public:
    void show()
    {
        cout<<"virtual defintion";
    }
};
int main()
{
    base *b;
    derived d;
    b=&d;
    b->show();
    return 0;
}
