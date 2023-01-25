//
//  main.cpp
//  1_6
//
//  Created by Eriks Karklins on 25/01/2023.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x,y;
    
    cout<<"Vai x ir dalāms ar y un paliek vesels skaitlis"<<endl<< endl;
    cout<<"ievadiet skaitli x "<<endl;
    cin>>x;
    cout<<"ievadiet skaitli y "<<endl;
    cin>>y;
    
    double z = x/y;
    
    int r = round(z);
    
    cout<<" Rezultāts "<< z << " Noapaļots "<< r <<endl;
    
    if (z==r) {
        cout<<" Skaitlis dalās " << endl;
    } else {
        cout<<" Skaitlis nedalās" << endl;
    }
    
    
    
    return 0;
}
