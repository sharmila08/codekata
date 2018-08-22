#include<iostream>
using namespace std;
class chess
{
   public:
   int n;
   void get()
   {
       cin>>n;
   }
   public:
   void pat()
   {
       int i,j;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if((i+j)%2!=0)
               {
                   cout<<" ";
               }
               else
               {
                   cout<<"#";
               }
           }
               cout<<"\n";
       }
   }
};
int main()
{
    chess c;
    c.get();
    c.pat();
    return 0;
}
