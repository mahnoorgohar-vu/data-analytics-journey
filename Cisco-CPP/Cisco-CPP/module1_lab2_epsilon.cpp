#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2;
    
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    
    float res1 = 1.0f / num1;
    float res2 = 1.0f / num2;
    float diff = res1 - res2;
    
    if (diff > -0.000001 && diff < 0.000001){
        cout<<"Results are equal (by 0.000001 epsilon)"<<endl;
    }
    else{
        cout<<"Results are not equal (by 0.000001 epsilon)";
    }
    
    return 0;
}
