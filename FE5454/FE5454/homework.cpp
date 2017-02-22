#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// Use your platform to create a project that input 10 stock Level1 quotes from your keyboard, save the quotes into an file at first, display them in monitor,  and then load from the file that you save. The stock quote includes stock name(12 characters), Best bid price and size, ask price and size, yesterday close price, open price, last price, and total volume. The stock quote must be handled by a structure.


string getQuotes() {
    // input 10 stock quotes from keyboard
    string stock1, stock2, stock3, stock4, stock5, stock6, stock7, stock8, stock9, stock10;
    cout << "Please provide 10 level1 stock quotes" << endl;
    //cin >> stock1 >> stock2 >> stock3 >> stock4 >> stock5 >> stock6 >> stock7 >> stock8 >> stock9 >> stock10;
    cin >> stock1;
    return stock1;
}

void saveToFile(string data) {
    // save quotes to file

    fstream textfile;
    textfile.open("stock_data.txt");
    textfile << data << endl;
    textfile.close();
}

void display(string data) {
    cout << data << endl;
}

void loadFromFile() {
    fstream textfile;
    textfile.open(("stock_data.txt"));
    if (textfile.is_open()) {
        string data;
        while(textfile >> data) {
            cout << data << endl;
        }
    } else {
        cout << "error opening file" << endl;
    }
}

int main() {
    string result = getQuotes();
    saveToFile(result);
    display(result);
    loadFromFile();
    
    return 0;
}

