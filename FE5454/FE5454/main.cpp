
#include <iostream>
#include <string>
using namespace std;


int main() {
    
    string myname = "Andi Mitre";
    int x = 5;
    
    if (x < 200) {
        cout << "x is less than 200" << endl;
    } else if (x > 200) {
        cout << "x is also less than 300" << endl;
    } else {
        cout << "x equals 200 " << endl;
    }
    
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    
    for(int n=15; x < n; x++) {
        if (x == 13) continue;
        cout << x << ", " << endl;
        // break to break out of the loop
        // and continue to skip out of
        // goto allows you to make a jump at another point of the program
        // where there is a label
        
    }
    
    switch (x)
    {
        case 8:
            cout << "x is 8" << endl;
            break;
        case 9:
            cout << "x is 9" << endl;
            break;
        case 15:
            cout << "x is 15" << endl;
            break;
        default:
            cout << " x was not found" << endl;
    }
    
    

    return 0;
}
