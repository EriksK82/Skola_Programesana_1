//
//  main.cpp
//  2_3
//
//  Created by Eriks Karklins on 28/01/2023.
//Aizpildiet masīvu ar 10 nejaušiem skaitļiem diapazonā no -10 līdz 10. Parādiet masīvu abos virzienos: no sākuma līdz beigām un no beigām līdz sākumam.
//

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    
    int i,apg[500],num[500];
    
    
    for (i=0; i<10; i++) {

        num[i] = (-10 + rand() %20);// katram ciparam pozicija un random nr.
        
        cout<< num[i]<<", ";
    }
    
    cout<<endl;
    
    for (i=0; i<10; i++) {

        apg[i] = num[10-i-1];// apgriežam pirmais cipars ir pēdējais no iepriekšējā (10-0-1=9 pozicija)
        
        cout<< apg[i]<<", ";
    }
    


    return 0;
}
