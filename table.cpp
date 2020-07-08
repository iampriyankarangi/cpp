// program to accept a nofrom the user to dispay the table of n//
#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"enter a no.";
	cin>>n;
	cout<<"Table of "<<n<<endl;
	for(i=1;i<=10;i++)
	{
      
      cout<<n<<" * "<<i <<" = "<<n*i<<endl;

	}
	return 0;
}