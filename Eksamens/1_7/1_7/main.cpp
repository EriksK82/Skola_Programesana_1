//
//  main.cpp
//  1_7
//
//  Created by Eriks Karklins on 25/01/2023.
//

#include <iostream>
#include <cmath>
using namespace::std;

int main() {
    
    double v1,v2;
    
    cout<<"Noskaidrojiet kurš auto ātrāks Auto 1 ar ātrumu m/s vai auto 2 ar ātrumu km/h "<< endl;
    cout<<"ievadiet 1 auto ātrumu m/s"<< endl;
    
    cin>> v1;
    
    cout<<"ievadiet 2 auto ātrumu km/h"<< endl;
    
    cin>> v2;
    
    double convert = (v2*1000)/3600;
    
    cout<< " 2 ātrums m/s "<< convert<< " m/s "<<endl;
    
    if (v1>convert) {
        cout << " ātrāks pirmais auto" << endl;
    } else if (v1==convert){
        cout << "ātrumi vienādi" << endl;
    } else {
        cout << " ātrāks otrais auto" << endl;
    }
    
    return 0;
}
