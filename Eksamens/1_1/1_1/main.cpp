//
//  main.cpp
//  1_1
//
//  Created by Eriks Karklins on 24/01/2023.
//

#include <iostream>
using namespace std;

int main() {
    double r,pi;
    pi = 3.14;
    
    cout<<"ievadiet apļa rādiusu"<< endl;
    
    cin >> r;
    
    double S = pi*(r*r);
    
    cout << " Apļa laukums "<<S<<endl;
    

    return 0;
}
