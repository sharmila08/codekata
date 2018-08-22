#include<iostream>

using namespace std;
class cipher
{
    public:
    char a[100];
    int i,n,d;
    public:
    void get()
    {
       cin.getline(a,100);
       cin>>n;
    }
    void ceasar()
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
           {
               cout<<" ";
           }
            if(a[i]>=97&&a[i]<=122)
            {
                a[i]=a[i]-32;
            }
            a[i]=a[i]+n;
            if(a[i]>90)
            {
                d=a[i]-90;
                a[i]=67+d;
            }
        }
        cout<<a;
    }
};
int main()
{
    cipher c;
    c.get();
    c.ceasar();
    return 0;
}
