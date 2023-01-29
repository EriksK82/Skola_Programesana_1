//
//  main.cpp
//  2_8
//
//  Created by Eriks Karklins on 29/01/2023.
//Aizpildiet masīvu ar 15 nejaušiem skaitļiem intervālā no -10 līdz 10. Atrodiet un izvadiet lielāko negatīvo vērtību.

#include <iostream>
using namespace std;

int i,k[20];
int main() {
    
    for (i=0;i<20; i++) {
        
        k[i]= -10 + rand() % 20;
        
        if(k[0]>k[i]){
            k[0]=k[i];
        }
        
        cout<<k[i]<<endl;
        
    }
    cout<<" mazākais: "<< k[0]<<endl;
    return 0;
}
