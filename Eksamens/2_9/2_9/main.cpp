//
//  main.cpp
//  2_9
//
//  Created by Eriks Karklins on 29/01/2023.
//Aizpildiet masīvu ar 15 nejaušiem skaitļiem intervālā no -10 līdz 10. Apmainiet vietām mazāko un lielāko elementus.

#include <iostream>
#include <string>
#include <ctime>

using namespace  std;

int i,k[15],m,l,p,c;



void virkne (){
    
    for (i=0; i<15; i++) {
        
        k[i]  = -10 + rand()% 20;

        cout<<k[i]<<" ";
    }
}

void mazakais (){
    for(i = 0; i < 15; i++){
        if(k[i] < m){
            m = k[i];
            c=i;
        }
    }
    
    cout<<m<<" "<<c;
}

void lielakais (){

    l = k[0];
    for(i = 0; i < 15; i++){
        if(k[i] > l){
            l = k[i];
            p=i;
        }
        
    }

    cout<<l<<" "<<p;
}

void maina(){

    k[p]=m;
    k[c]=l;
    
    for (i=0;i<15;i++){
        cout<<k[i]<<" ";
    }
    


}


int main() {

    virkne();
    
    cout<<endl;
    
    mazakais();
    
    cout<<endl;
    
    lielakais();
    
    cout<<endl;

    maina();

    cout<<endl;

    return 0;
}
