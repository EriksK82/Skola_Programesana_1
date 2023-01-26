//
//  main.cpp
//  MD4_1
//
//  Created by Eriks Karklins on 17/12/2022.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string laiks;
    int hh,mm,ss;
    
    cout << "ievadiet laiku formātā HH:MM:SS" << endl;
    cin >> laiks;
        
    try {
        hh = stoi(laiks.substr(0,2));
        mm = stoi(laiks.substr(3,2));
        ss = stoi(laiks.substr(6,2));
    } catch (...) {
        cout << laiks <<" - nepareizs formāts;" << endl;
            
        return 0;
    }
        
    if (laiks.length()!=8)
        cout << laiks <<" - nepareizs formāts;"<< endl;
        
    else if (hh > 24 || hh <= 0 || mm > 60 || mm <= 0 || ss > 60 || ss <= 0)
        cout << laiks << " - nepareizs laiks;" <<endl;
        
    else if (laiks.substr(2,1) != ":" || laiks.substr(5,1) != ":")
        cout << laiks <<" - nepareizs formāts;" <<endl;
        
    else
        cout << laiks << " - pareizi;" << endl;
        
    return 0;
}
