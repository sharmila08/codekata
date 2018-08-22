#include<iostream>
using namespace std;
class swa
{
    public:
    int a,b;
    public:
    void get()
    {
        cin>>a>>b;
    }
    void sw()
    {
        a=(a+b)-(b=a);
        cout<<a<<" "<<b;
    }
};
int main()
{
    swa s;
    s.get();
    s.sw();
    return 0;
}
