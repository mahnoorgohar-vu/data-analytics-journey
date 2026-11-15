#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    
    cout << "Enter number 1 for IP address: ";
    cin >> n1;
    cout << "Enter number 2 for IP address: ";
    cin >> n2;
    cout << "Enter number 3 for IP address: ";
    cin >> n3;
    cout << "Enter number 4 for IP address: ";
    cin >> n4;
    
    
    if ( (n1 >= 1 && n1 <= 255) && 
         (n2 >= 1 && n2 <= 255) && 
         (n3 >= 1 && n3 <= 255) && 
         (n4 >= 1 && n4 <= 255) ) 
    {
        
        cout << "The IP address is: " << n1 << "." << n2 << "." << n3 << "." << n4 << endl;
    }
    else {
        cout << "Invalid IP address." << endl;
    }
    
    return 0;
}
