#include<iostream>
using namespace std;
class Rect
{
	private:
		int length,breath;
	public:
		int getdata()
		{
			cout<<"Enter length "<<endl;
			cin>>length;
			cout<<"Enter breath "<<endl;
			cin>>breath;
			return 0; 
		}
		int dispdata()
		{
			cout<<"length "<<length<<endl;
			cout<<"breath "<<breath<<endl;
			return 0;
		}

};

int main()
{
	Rect r;
	cout<<"****** Executing class Rect ******"<<endl;
	r.getdata();
	r.dispdata();
	return 0;
}