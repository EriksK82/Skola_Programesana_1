//
//  main.cpp
//  1_9
//
//  Created by Eriks Karklins on 25/01/2023.
//

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    int i,z,j;
    
    j=0;

    for (i=0; i<20; i++) {

        z = -100+rand()%200;

        cout<<z<<endl;
        
        if (z>0) {
            j++;
        }
    }
    cout<<"Pozitīvo skaits"<<j<<endl;
    

    return 0;
}
