#include<iostream>
using namespace std;
class Rect
{
	private:
	    int length,breath;
	public:
		int getdata()
		{
			cout<<"Enter length"<<endl;
			cin>>length;
			cout<<"Enter breath"<<endl;
			cin>>breath;
			return 0;
		}
		int display()
		{
			cout<<" length "<<length<<endl;
			cout<<"breath "<<breath<<endl;
			return 0;
		}
		int area()
		{
			int a;
			a=length*breath;
			return a;
		}
};
class Box:public Rect
{
	private:
		int hieght;
	public:
		int getdata1()
		{
			cout<<"Enter hieght "<<endl;
			cin>>hieght;
			return 0;
		}
		int display1()
		{
			cout<<"hieght "<<hieght<<endl;
			return 0;
		}
		int volume()
		{
			int v;
			v = area()*hieght;
			return v;
		}
};
int main()
{
	Box b;
	b.getdata();
	b.getdata1();
	cout<<"**** box with rect inheritance***"<<endl;
	b.display();
	b.display1();
	cout<<" volume "<<b.volume()<<endl;
	cout<<" area "<<b.area()<<endl;
	return 0;
}
