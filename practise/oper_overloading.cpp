#include<iostream>
using namespace std;
class sample
{
    private:
    int num,n,m;
    public:
    sample()
    {
        n=8;
        m=9;
    }
    void operator ++()
    {
        num=n+m;
    }
    void print()
    {
        cout<<"count is "<<num;
    }
};
int main()
{
    sample s;
    ++s;
    s.print();
    return 0;
}
