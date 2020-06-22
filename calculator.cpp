#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   int a, b,c;
   char oper; 
   cout << "Enter Number A\n";
   cin >> a;
   cout << "Enter Number B\n";
   cin >> b;
   cout << "Enter operator\n";
   cin >> oper;
   switch(oper) {
      case '+' :
       cout <<"addition is : "<<a<<" and "<<b<<" c= "<<a+b<<endl; 
         break;
         case '-' :
      cout <<"substraction is: "<<a<<" and "<<b<<" c= "<<a-b<<endl;
         break;
         case '*':
         cout <<"multiplication is: "<<a<<" and "<<b<<" c= "<<a*b<<endl;
         break;
         case '/':
         cout <<"division is: "<<a<<" and "<<b<<" c= "<<a/b<<endl;
         break;
      default :
         cout << "Invalid operator" << endl;
   }
   return 0;
}