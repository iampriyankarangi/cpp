#include <iostream> 
using namespace std; 
  
class rect { 
    private:
        int length, breath;
    public: 
        rect() 
        { 
        length = 0; 
        breath = 0; 
        cout<< "Hello for constructor! {0} \n";
        } 
        rect(int l, int b){
            length = l;
            breath = b;
            cout << "Using constructor! {1} \n";
        }
        rect(rect &r){
            length = r.length;
            breath = r.breath;
            cout << "Using copy constructor! {3} \n";
            cout << "Length: "<< length<<endl;
            cout << "Breath: "<<breath<<endl;
        }
        int dispdata(){
            cout << "Length: "<< length<<endl;
            cout << "Breath: "<<breath<<endl;
            return 0;
        }
};
  
int main() 
{ 
    // Default constructor called automatically 
    // when the object is created 
    rect r1, r2(5,10), r3(r2); 
    r2.dispdata();
    return 0; 
} 