//
//  main.cpp
//  2_3
//
//  Created by Eriks Karklins on 28/01/2023.
//Aizpildiet masīvu ar 10 nejaušiem skaitļiem diapazonā no -10 līdz 10. Parādiet masīvu abos virzienos: no sākuma līdz beigām un no beigām līdz sākumam.
//

#include <iostream>
#include <ctime>


using namespace std;

int main() {
    
    int i,apg[10],num[10];
    
    
    for (i=0; i<10; i++) {

        num[i] = (-10 + rand() %20);// katram ciparam pozicija [0],[1],[2] ..... [9]un random nr.
        
        cout<< num[i]<<", ";
    }
    
    cout<<endl;
    
    for (i=0; i<10; i++) {

        apg[i] = num[10-i-1];// apgriežam [9] kļūs par [0] (10-0-1=9 pozicija)
        
        cout<< apg[i]<<", ";
    }
    


    return 0;
}
