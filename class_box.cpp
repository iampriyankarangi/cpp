#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breath,height;
	public:
		int getdata()
		{
			cout<<"Enter length "<<endl;
			cin>>length;
			cout<<"Enter breath "<<endl;
			cin>>breath;
			cout<<"Enter height "<<endl;
			cin>>height;
			return 0;
		}
		int dispdata()
		{
			cout<<"length "<<length<<endl;
			cout<<"breath "<<breath<<endl;
			cout<<"height "<<height<<endl;
			return 0;
		}
};
int main()
{
	Box b;
	cout<<"***** Executing my program *****"<<endl;
	b.getdata();
	b.dispdata();
	return 0;

}