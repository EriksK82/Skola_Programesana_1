//
//  main.cpp
//  10_2
//
//  Created by Eriks Karklins on 28/01/2023.
//Ievadiet divus skaitļus un simbolu. Atkarībā no ievadītā simbola: + - * / (сhar) jāizpilda kādu no matemātiskajām operācijām (izmantojot switch).

#include <iostream>

using namespace std;

int main() {

    int x, y;
    char z;
    
    cout<<" ievadiet pirmo skaitli: "<< endl;
    cin>> x;
    
    cout << " ievadiet otro skaitli: "<< endl;
    cin>> y;
    
    cout<< " ievadiet darbības veidu +, -, *, /"<<endl;
    
    cin>>z;
    
    switch (z) {
        case '+':
            cout<<x<<"+"<<y<<"="<<x+y<< endl;
            break;
            
        case '-':
            cout<<x<<"-"<<y<<"="<<x-y << endl;
            break;
            
        case '*':
            cout<<x<<"*"<<y<<"="<<x*y << endl;
            break;
            
        case '/':
            cout<<x<<"/"<<y<<"="<<x/y << endl;
            break;
            
        default:
            break;
    }
    
    return 0;
}
