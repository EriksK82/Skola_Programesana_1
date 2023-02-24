//
//  main.cpp
//  3_2
//
//  Created by Eriks Karklins on 23/02/2023.
// Ar gadījuma ģeneratoru aizpildiet divdimensiju masīvu 5x5 ar skaitļiem intervālā 1-5, izvadiet to matricas formā. Aprēķiniet un izvadiet katras diagonāles summu.

#include <iostream>
#include <ctime>

using namespace std;


int i,j,k[5][5],sum_l[5][5],sum_r[5][5], l_sum = 0, r_sum = 0;

void matrica(){
    for(int i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            k[i][j]=(rand()%5)+1;
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
}

void aprekins_K(){
    
    
    for(int i = 0; i < 5; i++){

        sum_l[i][i]=k[i][i];
        cout<<sum_l[i][i]<<" ";
        l_sum+=sum_l[i][i];
    }
    cout<<"summa "<<l_sum;
}

void aprekins_L(){
    
    for(int i = 0; i < 5; i++){
        
        sum_r[i][i]=k[i][4-i];
        cout<<sum_r[i][i]<<" ";
        r_sum+=sum_r[i][i];
    }
    
    cout<<"summa "<<r_sum;
    
}

int main() {
    
    
    matrica();
    
    cout<<endl;
    
    aprekins_K();
    
    cout<<endl;
    
    aprekins_L();
    
    cout<<endl;

    return 0;
}
