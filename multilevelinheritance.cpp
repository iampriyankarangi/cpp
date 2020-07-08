#include<iostream>
using namespace std;
class number
{
  private:
  	int x,y;
  public:
  	int getdata()
  	{
  		cout<<"Enter no. x and y: "<<endl;
  		cin>>x>>y;
  		return 0;
  	}
  	int dispdata()
  	{
  		cout<<" no. x and y "<<x<<' '<<y<<endl;
  		return 0;
  	}
  	int large()
  	{
  		if(x>y)
  			//cout<<" x = "<<x<<"large";
  			return x;
  		else
  			//cout<<"y = "<<y<<"large";
  			return y;

  	}
};
class number1:public number
{
   private:
   	int z;
   public:
   	int getdata1()
   	{
   		getdata();
   		cout<<" Enter z no. "<<endl;
   		cin>>z;
   		return 0;
   	}
     int dispdata1()
     {
     	dispdata();
     	cout<<" no. z "<<z<<endl;
     	return 0;
     }
     int large1()
     {
     	if(large()<z)
     		return z;
     	else
     		return large();
     }
};
class number2:public number1
{
 private:
 	int w;
 public:
 	int getdata2()
 	{
 		getdata1();
 		cout<<" Enter w no. "<<endl;
 		cin>>w;
 		return 0;
 	}
 	int dispdata2()
 	{
 		dispdata1();
 		cout<<"no w "<<w<<endl;
 		return 0;
 	}
 	int large2()
 	{
 		if(w>large1())
 			return w;
 		else
 			return large1();
 	}
};
int main()
{
	int l;
	number2 n;
	n.getdata2();
	n.dispdata2();
	n.large2();
	l=n.large2();
	cout<<"large no. "<<l;
	return 0;
}