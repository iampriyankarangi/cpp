#include<iostream>
using namespace std;
class rect
{
private:
	int l,b;
	int p,a;

public:
void getdata()
{
	cout<<"enter a length:";
	cin>>l;
	cout<<"enter a breath:";
	cin>>b;
}
void calc()
{
	a=l*b;
	p=2*(l+b);
}
void dispdata()
{
	cout<<" length  = "<<l<<endl;
	cout<<" breath  ="<<b<<endl;
}
void dis()
{
	cout<<"area: "<<a<<endl;
	cout<<"perimeter: "<<p<<endl;

}
};
int main()
{
	rect r1;
	r1.getdata();
	r1.calc();
	r1.dispdata();
	r1.dis();
	return 0; 
}