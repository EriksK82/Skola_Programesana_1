//
//  main.cpp
//  2MD_1UZD
//
//  Created by Eriks Karklins on 12/11/2022.
//

#include <iostream>
using namespace std;


double r1, r2, S2m, apr, Slr, Smr, Pi = 3.14;

double circle_area(double R) {

    double S = Pi*(R * R);
    return S;
 
}

int main () {
    
    cout << "ievadiet lielo rādiusu r1 "<< endl;
    cin >> r1;
    cout << "ievadiet mazo rādiusu r2 "<< endl;
    cin >> r2;
    
    Slr = circle_area (r1);
    Smr = circle_area (r2);
    
    S2m = Pi*((r2/2)*(r2/2));
    
    double apr = (Slr-Smr)+2*(S2m);
    
    cout << " laukums = "<< apr<< endl;
    
    return 0;
}
