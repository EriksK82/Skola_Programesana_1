//
//  main.cpp
//  2_1
//
//  Created by Eriks Karklins on 28/01/2023.
//Ievadiet 2 veselus skaitļus - sākotnējo vērtību un pieaugumu. Parādiet 10 soļu aritmētisko progresiju. Piemērs: 17 un 5 -> 17,22,27,32,...


#include <iostream>

using namespace std;

int main() {
    
    int s_vertiba, pieaugums,i;
    
    cout<< "Ievadiet sākotnējo vērtību" << endl;
    
    cin >> s_vertiba;
    
    cout << " ievadiet pieaugumu"<< endl;
    
    cin >> pieaugums;
    
    cout<< s_vertiba<<", ";
    
    
    for (i=0; i<10; i++) {
        
        s_vertiba= s_vertiba+pieaugums;
        
        cout << s_vertiba<< ", ";
    }
    

    return 0;
}
