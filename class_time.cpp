#include<iostream>
using namespace std;
class Time
{
	private:
		int hour,minute,seconds;
	public:
		int getdata()
		{
      		cout<<"Enter hour "<<endl;
      		cin>>hour;
      		cout<<"Enter minute "<<endl;
      		cin>>minute;
      		cout<<"Enter seconds "<<endl;
      		cin>>seconds;
      		return 0;
      	}
      	int display()
		{
			cout<<" hour "<<hour<<endl;
			cout<<" minute "<<minute<<endl;
			cout<<" seconds "<<seconds<<endl;
			return 0;
		}
};
int main()
{
	Time k;
	k.getdata();
	k.display();
	return 0;
}