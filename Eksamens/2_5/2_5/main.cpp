//
//  main.cpp
//  2_5
//
//  Created by Eriks Karklins on 29/01/2023.
//Uzrakstiet funkciju, kas kā parametru saņem kvadrāta malas garumu un atgriež kvadrāta perimetru.

#include <iostream>

using namespace std;

int n;

void funkcija(){
    
    cout<<"ievadiet kvadrāta malas garumu, lai noteiktu kvadrāta perimetru"<<endl;
    
    cin>>n;
    
    int P= n*4;
    
    cout<<"Perimetrs ir:"<<P<<endl;

}

int main() {

    funkcija();
    
    return 0;
}
