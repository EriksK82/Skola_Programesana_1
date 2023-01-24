//
//  main.cpp
//  1_5
//
//  Created by Eriks Karklins on 24/01/2023.
//

#include <iostream>
#include<cstdlib>//šo vajag lai rand tiešām radītu random ciparus (sasaiste ar datora laiku)

using namespace std;

int main() {

    int x;
    
    for (int i =0; i<5; i++) {// cikls sāk ar 0 un turpina strādāt 5 reizes (kamēr i ir mazāks pa 5)I++ palielina i vērtību par vienu reizi katru reizi kad izpildās cikls.
        
        x= 69+ (rand() % 11);// 69 apakšējā robeža tālāk random skaitlis no 1 līdz 11 (saskaitot 69+ rand iegūst random skaitli robežās no 70-80.
        
        cout<<" Skaitlis "<< x<< endl;
    }
    
    return 0;
}
