//
//  main.cpp
//  2_10
//
//  Created by Eriks Karklins on 22/02/2023.
//
//10. Ievadiet virkni. Izvadiet virkni apgrieztā secībā (piemērs: computer -> retupmoc).

#include <iostream>
#include <string>

using namespace std;

string virkne,apgriezta;

int main() {
    
    cout<<"ievadiet tekstu"<<endl;
    getline(cin, virkne);
    
    
    int garums = virkne.length();

    cout<<virkne<<" "<<garums<<endl;

    
    for (int i = 0; i<garums; i++) {
        apgriezta[i]=virkne[garums-i-1];//-1jo pozicijas skaita no 0 1 2 3 4 = kopā 5
        
        cout<<apgriezta[i];
    }
    cout<<endl;

    
    

    return 0;
}
