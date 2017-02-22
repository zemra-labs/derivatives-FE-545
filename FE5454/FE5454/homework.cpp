#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// Use your platform to create a project that input 10 stock Level1 quotes from your keyboard, save the quotes into an file at first, display them in monitor,  and then load from the file that you save. The stock quote includes stock name(12 characters), Best bid price and size, ask price and size, yesterday close price, open price, last price, and total volume. The stock quote must be handled by a structure.


void loadQuotes(string stocks[], int length) {
    // input 10 stock quotes from keyboard
    cout << "Please provide 10 level1 stock quotes" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> stocks[i];
    }
}

void saveToFile(string stocks[], int length) {
    // save quotes to file
    fstream textfile;
    textfile.open("stock_data.txt");
    if (textfile.is_open()) {
        for(int x = 0; x < length; x++) {
            textfile << stocks[x] << " ";
        }
    }
    textfile.close();
}

void display(string arr[], int length) {
    // display each element to screen
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

void loadFromFile() {
    // load data from file
    fstream textfile;
    textfile.open(("stock_data.txt"));
    if (textfile.is_open()) {
        string data;
        while(textfile >> data) {
            cout << data << endl;
        }
    } else {
        cout << "Error opening file" << endl;
    }
}

int main() {
    // create string array to hold stock level data
    string stocks[10];
    loadQuotes(stocks, 10);
    saveToFile(stocks, 10);
    display(stocks, 10);
    loadFromFile();
    
    return 0;
}

