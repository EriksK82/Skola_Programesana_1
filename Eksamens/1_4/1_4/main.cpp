//
//  main.cpp
//  1_4
//
//  Created by Eriks Karklins on 24/01/2023.
//

#include <iostream>
using namespace std;

int main() {

    int x;
    
    cout <<"ievadiet skaitli ar vairākām zīmēm"<<endl;
    cin>>x;
    
    while (x >=10)//cikls turpinās (x dala ar 10) kamēr x ir mazāks vai vienāds ar 10, kad ir izvada pēdējo x vērtību.
    x = x / 10;//katrā ciklā izdala ar 10 attiecīgi samazina par vienu zīmi skaotli;
    
    cout <<" pirmais cipars ir "<< x << endl;
    
    return 0;
}
