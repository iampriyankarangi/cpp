//write a program to accept two no from user to display table from a to b//
#include<iostream>
using namespace std;
int main()
{
	int a,b,i,n,k;
	cout<<"Enter a no a to b:";
	cin>>a>>b;
	for(n=a;n<=b;n++)
	{
		cout<<"Table of "<<n<<endl;
	  for(i=1;i<=10;i++)
	 {
		
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	  }
	  cout<<"**************"<<endl;
    }
	
	return 0;

}