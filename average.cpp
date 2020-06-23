//program to five no. from user calculate and display the sub and average of no//
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,p,k;
	cout<<"enter a five no.";
	cin>>a>>b>>c>>d>>e;
	p=a+b+c+d+e;
	k=p/5;
	cout<<"the sum is: "<<p;
	cout<<endl<<"the average is: "<<k;
	return 0;
}
