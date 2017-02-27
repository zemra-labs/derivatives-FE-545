#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;
// Use your platform to create a project that input 10 stock Level1 quotes from your keyboard, save the quotes into an file at first, display them in monitor,
// and then load from the file that you save. The stock quote includes stock name(12 characters), Best bid price and size, ask price and size,
// yesterday close price, open price, last price, and total volume. The stock quote must be handled by a structure.
//int row = 1;

void insertDetails(double stock_details[10][8], int row1) {
    cout << "Please enter the following details: best bid price and size, ask price and size, yesterday "
    "close price, open price, last price and total volume. " << endl;
    
    int i = row1;
        while(i == row1){
        for (int j=0; j<8; j++) {
            cout << "i: " << i;
            cout << " j: ";
            cin >> stock_details[i][j];
        }
        i++;
    }
}

void loadQuotes(string stocks[], double stock_details[10][8], int length) {
    // input 10 stock quotes from keyboard
    int r = 0;
    for (int i = 0; i < 2; i++) {
        cout << "Please provide 10 level1 stock quotes. " << endl;
        cin >> stocks[i];
        // calls insertDetails() to insert details per stock
        insertDetails(stock_details, r);
        r++;
        cout << r;
    }
}


void saveToFile(string stocks[], double stock_details[10][8], int length) {
    // save quotes to file
    fstream textfile;
    textfile.open("stock_data.txt");
    int row = 0;
    if (textfile.is_open()) {
        for(int x = 0; x < length; x++) {
            // loop through each stock and write stock name
            textfile << stocks[x] << " ";
            int so = row;
            while(so == row) {
                for (int j = 0; j < 8; j++) {
                    // loop through each stock detail and print detail associated to stock
                    textfile << stock_details[so][j] << " ";
                }
                textfile << endl;
                row++;
            }
        }
    }
    // close textfile
    textfile.close();
}

//void displayStocks(string arr[], int length) {
//    // display each element to screen
//    for (int i = 0; i < length; i++) {
//        cout << arr[i] << endl;
//    }
//}

void displayAll(string stocks[], double stock_details[10][8], int length) {
    int row = 0;
    for(int x = 0; x < length; x++) {
        // loop through each stock and write stock name
        cout << stocks[x] << " ";
        int so = row;
        while(so == row) {
            for (int j = 0; j < 8; j++) {
                // loop through each stock detail and print detail associated to stock
                cout << stock_details[so][j] << " ";
            }
            cout << endl;
            row++;
        }
    }
}

void loadFromFile() {
    // load data from file
    cout << "Loading from file." << endl;
    fstream textfile;
    textfile.open(("stock_data.txt"));
    if (textfile.is_open()) {
        for(string data; getline(textfile, data);) {
            cout << data << endl;
        }
    } else {
        cout << "Error opening file" << endl;
    }
}

int main() {
    // create string array to hold stock level data
    string stocks[10];
    double stock_details [10][8] = {0};
    loadQuotes(stocks, stock_details, 10);
    saveToFile(stocks, stock_details, 10);
    //displayStocks(stocks, 10);
    displayAll(stocks, stock_details, 10);
    loadFromFile();
    
    return 0;
}

