#include<iostream>
using namespace std;
class parent
{
    public:
    virtual void print()
    {
        cout<<"parent"<<endl;
    }
};
class child:public parent
{
    public:
    void print()
    {
        cout<<"child"<<endl;
    }
};
int main()
{
    parent *obj1;
    child obj2;
    obj1=&obj2;
    obj1->print();
    return 0;
}
