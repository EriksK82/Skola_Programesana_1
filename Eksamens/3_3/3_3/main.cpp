//
//  main.cpp
//  3_3
//
//  Created by Eriks Karklins on 24/02/2023.
//Ar gadījuma ģeneratoru aizpildiet divus divdimensiju masīvus A un B, 5x5 ar skaitļiem diapazonā 1-5. Definējiet trešo divdimensiju masīvu C, aprēķiniet tā elementu vērtības pēc formulas Cij=Aij+Bij

#include <iostream>
using namespace std;

int i,j,masivs_A[5][5],masivs_B[5][5],masivs_C[5][5];

void array_A(){
    
    cout<<"Masivs A"<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5; j++){
            masivs_A[i][j]=(rand()%5)+1;
            cout<<masivs_A[i][j]<<" ";
        }
        cout<<endl;
    }
}

void array_B(){
    cout<<"Masivs B"<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5; j++){
            masivs_B[i][j]=(rand()%5)+1;
            cout<<masivs_B[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void array_C(){
    cout<<"Masivs C"<<endl;
    
    for(i=0;i<5;i++){
        for(j=0;j<5; j++){
            masivs_C[i][j] = masivs_A[i][j]+masivs_B[i][j];
            cout<<masivs_C[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}

int main() {

    array_A();
    
    cout<<endl;
    
    array_B();
    
    cout<<endl;
    
    array_C();
    
    return 0;
}
