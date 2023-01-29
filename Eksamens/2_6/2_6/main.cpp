//
//  main.cpp
//  2_6
//
//  Created by Eriks Karklins on 29/01/2023.
// Uzrakstiet funkciju, kas kā parametru saņem kvadrāta malas garumu un izvada kvadrāta perimetru un laukumu.
#include <iostream>

using namespace std;

int n;

void funkcija(){
    
    cout<<"ievadiet kvadrāta malas garumu, lai noteiktu kvadrāta perimetru"<<endl;
    
    cin>>n;
    
    int P = n*4;
    int L = n*n;
    
    cout<<"Perimetrs ir:"<<P<<endl;
    cout<<"Laukums ir:"<<L<<endl;
}

int main() {

    funkcija();
    
    return 0;
}
