//
//  main.cpp
//  2_4
//
//  Created by Eriks Karklins on 29/01/2023.
//4. Uzrakstiet funkciju, kas ņem veselu skaitli – laika stundas vērtību 24 stundu formātā (diapazonā no 0 līdz 23) un atgriež laiku 12 stundu formātā (diapazonā no 0 līdz 12).

#include <iostream>
using namespace std;

int stunda;

void funkcija(){
    
    cout<< " ievadiet stundas 24 stundu formātā lai pārvērstu tās 12stundu formātā "<< endl;

    cin >> stunda;
    
    if (stunda<0 || stunda >24) {
        cout<<"Nevar pārvērts - ievadītajam laikam jābūt robežās  0 līdz 24"<<endl;
        
    } else if (stunda<=12) {
        cout<<stunda<<"AM"<<endl;
        
    } else if (stunda>12){
        cout<<stunda-12<<"PM"<<endl;
    }
        
}

int main() {

    funkcija();

    return 0;
}
