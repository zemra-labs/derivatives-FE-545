
#include <iostream>
#include <string>
using namespace std;

char acharacter = 'a';

int sum(int a, int b) {
    return a + b;
}

// pass by reference
void timestwo(int &a, int &b) {
    a *= 10;
    b *= 10;
}

int divide(int a=10, int b=2) {
    int r = a/b;
    return r;
}

// can also pass void to parameter list when
// you don't want to pass anything
void printCharacter(char a) {
    cout << a << " is the character" << endl;
}
/*
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
    cout << myname << endl;
    
    int total = sum(10, 20);
    cout << total << endl;
    
    cout << acharacter << endl;
    
    printCharacter(acharacter);
    
    int d = 4;
    int e = 5;
    
    timestwo(d,e);
    cout << d << endl;
    cout << e << endl;

    cout << divide() << endl;
    
    
    return 0;
}
*/
