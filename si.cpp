//to program principle,rate,time from the user then calculate si. and ci//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p,r,t,si,ci;
	cout<<"enter a principle ,rate and time";
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	ci=p*pow(1+r/100,t)-p;
	cout<<"SI is: "<<si<<endl;
	cout<<"CI is: "<<ci;
	return 0;
}