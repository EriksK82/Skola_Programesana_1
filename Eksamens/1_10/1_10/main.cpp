//
//  main.cpp
//  1_10
//
//  Created by Eriks Karklins on 28/01/2023.
//Programmā pieprasa lietotāja vārdu un uzvārdu (vienā rindā, atdalītus ar atstarpi) un izvada kopējo garumu (simbolu skaitu) bez atstarpes.

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string vards;
    
    cout << "ievadiet vārdu un uzvārdu"<<endl;
    
    getline(cin, vards);// teksta ievades ar atstarpem
    
    vards.erase(::remove_if(vards.begin(), vards.end(),::isblank),vards.end()); // tukšumu noņemšana
    
    cout<<vards<< endl;
    
    cout<<" Varda burtu skaits:"<< vards.size()<< endl; // simbolu skaits 

    return 0;
}
