#include<iostream>
using namespace std;
class Distance
{
	public:
		int inch,feet;

	public:
		int getdata()
		{
			cout<<" Enter inch: "<<endl;
			cin>>inch;
			cout<<" Enter feet: "<<endl;
			cin>>feet;
			return 0;
		}
	public:
		int display()
		{
			cout<<"inch: "<<inch<<endl;
			cout<<"feet: "<<feet<<endl;
			return 0;
		}
};
int main()
{
	Distance d;
	d.getdata();
	cout<<" ****distance related information***** "<<endl;
	d.display();
	return 0;
}