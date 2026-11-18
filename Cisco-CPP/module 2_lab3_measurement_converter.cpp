#include <iostream>

using namespace std;

int main(void) {
    int sys;
    float m, ft, in, total_inches;
    
    cout << "Which system you want to use (0 means 'Metric' 1 means 'Imperial'): " << endl;
    cin >> sys;
    
    if (sys == 0) {
        cout << "Enter meter number: " << endl;
        cin >> m;
        
        if (m >= 0) {
            total_inches = m / 0.0254;
            ft = (int)(total_inches / 12);
            in = total_inches - (ft * 12);
            cout << ft << "'" << in << "\"" << endl;
        } else {
            cout << "Invalid input" << endl;
        }
    }
    else if (sys == 1) {
        cout << "Enter Feet: " << endl;
        cin >> ft;
        cout << "Enter Inches: " << endl;
        cin >> in;
        
        if (ft >= 0 && in >= 0) {
            total_inches = (ft * 12) + in;
            m = total_inches * 0.0254;
            cout << m << "m" << endl;
        } else {
            cout << "Invalid input" << endl;
        }
    }
    else {
        cout << "Invalid System" << endl;
    }
    
    return 0;
}
