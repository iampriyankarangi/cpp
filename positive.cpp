//program to check if no. is positive and negative//
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a no. n:";
	cin>>n;
	if(n==0)
	{
		cout<<n;}
	   else
	   {	
	    if(n>0)
	     {
		   cout<<n<<" no. is a positive";
	      }
	      else
	       {	
	        cout<<n<<"  no. is a negative";}
        }
	return 0;
}