#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a no.";
	cin>>n;
	if((n%400==0)||(n%100==0))

	{
		cout<<" Leap year";
	}
	else
	{
		if(n%4==0)
		  {	cout<<"leap year";}
		else
			{cout<<"non leap year";}
	}
	return 0;
}