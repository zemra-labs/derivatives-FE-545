#include <stdio.h>
#include <iostream>


using namespace std;
//Please build a small project to implement below by using 'loop and switch':
//n students is getting into a theater that has m seats in each row.
//How many minimum rows will the students use? and how many students does the last row have?

int main() {
    int students;
    int seats;
    cout << "Please enter a random number of students " << endl;
    cin >> students;
    cout << "Please enter a random number of seats " << endl;
    cin >> seats;
    
    int row = 1; // a theater has at least one row of seats
    int totalSeats;
    bool reach = true;
    

    // typical scenarios 10 students 5 seats should return min num. of rows = 2, last row = 5 students
    // 100 students 15 seats should return min num. of rows = 7, last row = 10 students
    
    while(reach) {
        switch (seats) {
            case 5:
                // 5 seats per row
                if ((row * seats) < students) {
                    row++;
                } else {
                    totalSeats = row * seats;
                    cout << "The minimum number of rows students will use is " << row << endl;
                    if ((totalSeats % students) == 0) {
                        cout << "The last row will have " << seats << " student(s)." << endl;
                        reach = false;
                    } else {
                        cout << "The last row will have " << (seats) - (totalSeats % students) << " student(s)." << endl;
                        reach = false;
                    }
                }
                break;
            case 10:
                // 10 seats per row
                if ((row * seats) < students) {
                    row++;
                } else {
                    totalSeats = row * seats;
                    cout << "The minimum number of rows students will use is " << row << endl;
                    if ((totalSeats % students) == 0) {
                        cout << "The last row will have " << seats << " student(s)." << endl;
                        reach = false;
                    } else {
                        cout << "The last row will have " << (seats) - (totalSeats % students) << " student(s)." << endl;
                        reach = false;
                    }
                }
                break;
            case 15:
                // 15 seats per row
                if ((row * seats) < students) {
                    row++;
                } else {
                    totalSeats = row * seats;
                    cout << "The minimum number of rows students will use is " << row << endl;
                    if ((totalSeats % students) == 0) {
                        cout << "The last row will have " << seats << " student(s)." << endl;
                        reach = false;
                    } else {
                        cout << "The last row will have " << (seats) - (totalSeats % students) << " student(s)." << endl;
                        reach = false;
                    }
                }
                break;
            case 20:
                // 20 seats per row
                if ((row * seats) < students) {
                    row++;
                } else {
                    totalSeats = row * seats;
                    cout << "The minimum number of rows students will use is " << row << endl;
                    if ((totalSeats % students) == 0) {
                        cout << "The last row will have " << seats << " student(s)." << endl;
                        reach = false;
                    } else {
                        cout << "The last row will have " << (seats) - (totalSeats % students) << " student(s)." << endl;
                        reach = false;
                    }
                }
                break;
            default:
                cout << "I'm not sure about that calculation. Please try with 5, 10, 15 or 20 seats." << endl;
                reach = false;
                break;
        }
    }
        
    
    
//    while(row >= 1) {
//        if ((row * seats) < students) {
//            row++;
//        } else {
//            break;
//        }
//        
//        cout << "The minimum number of rows students will use is " << row << endl;
//        
//        cout << "The last row will have " << (totalSeats % students) << " students." << endl;
//    }
    
    
    return 0;
}

