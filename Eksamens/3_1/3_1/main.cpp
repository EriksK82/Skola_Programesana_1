//
//  main.cpp
//  3_1
//
//  Created by Eriks Karklins on 22/02/2023.
// Saģenerēt masīvu no 20 skaitļiem intervālā no 1 līdz 100. Atrast otro lielāko masīva elementu.

#include <iostream>
#include <ctime>

using namespace std;

int i,l,p,k,c, masivs[20];

void virkne(){
    
    for (i=0; i<20; i++) {
        masivs[i] = rand()% 20;
        
        cout<<masivs[i]<<" ";
    }
}

void lielakais (){

    l = masivs[0];
    for(i = 0; i < 20; i++){
        if(masivs[i] > l){
            l = masivs[i];
            p=i;
        }
        
    }

    cout<<l<<" "<<p;
}

void nonemt(){

    for(i=0;i<20;i++){
        if(masivs[i]==l){
            masivs[i]=0;
        }
    }
    
}



int main() {
    
    virkne();
    
    cout<<endl;
    
    cout<<"Pirmais lielākais:";
    lielakais();
    
    nonemt();
    
    cout<<endl;
    
    cout<<"Otrs lielākais:";
    lielakais();
    
    cout<<endl;


    return 0;
}
