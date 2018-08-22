#include<iostream>
using namespace std;
class fact
{
    public:
    int i,n;
  public:
  void get()
  {
      cin>>n;
  }
 void fac()
  {
      int f=1;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    cout<<f;
  }
};
int main()
{
    fact ob;
    ob.get();
    ob.fac();
    
}
