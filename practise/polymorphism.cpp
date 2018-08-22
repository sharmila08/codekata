#include <iostream>
#define p 0.5f
using namespace std;
class area
{
	public:
	void ar(int a)
	{
		int sq=a*a;
		cout<<sq<<"\n";
	}
	void ar(int l,int b)
	{
		int rec=l*b;
		cout<<rec<<"\n";
	}
	void ar(int l,int b,int h)
	{
	    
		float tri=p*(l*b);
		cout<<tri;
	}
};
int main() {
		int a,l,b,h;
		cin>>a>>l>>b>>h;
	area ob;
	ob.ar(a);
	ob.ar(l,b);
	ob.ar(l,b,h);
	return 0;
}
