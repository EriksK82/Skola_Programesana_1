//
//  main.cpp
//  1_8
//
//  Created by Eriks Karklins on 25/01/2023.
//

#include <iostream>
#include <cmath>
using namespace::std;

int main() {

    double cena, atlaide1,atlaide2,cena_ar_atlaidem;
    
    cout<<" ievadiet datora cenu"<<endl;

    cin>> cena;
    
    atlaide1 = (cena*20)/100;
    atlaide2 = ((cena-atlaide1)*10)/100;
    cena_ar_atlaidem = cena-atlaide1-atlaide2;
    
    cout<<" Pirmā atlaide "<< atlaide1<<endl;
    cout<<" Otrā atlaide "<< atlaide2<<endl;
    cout<<" gala cena "<< cena_ar_atlaidem<< endl;
    
    return 0;
}
