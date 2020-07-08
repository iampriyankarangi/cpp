#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,total;
	float avrg;
	cout<<"enter a 3 no.";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avrg=total/3.0;
	if(m1<35||m2<35||m3<35)
     {
      cout<<"fail"; 
     }
     else
     {
     	if(avrg>=60)
     	{
     		cout<<"division 'A'";
     	}
     	else
     	{
     		if( avrg>=45)
     		{
     			cout<<"disivion 'a'";
     		}
     		else
     		{
     			if(avrg>=35)
     			cout<<"division 'b'";
     		}
     	}
     }
     return 0;

} 