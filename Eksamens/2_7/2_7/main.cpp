//
//  main.cpp
//  2_7
//
//  Created by Eriks Karklins on 29/01/2023.
//Uzrakstiet funkciju, kas saņem taisnstūra trīsstūra apakšējās malas garumu, un uzzīmējiet trīsstūri no
//zvaigznītēm. Piemērs: sānu garums ir 7. Katras augšējās zvaigznītes rindas garums jāsamazina par 2.

#include <iostream>
using namespace std;

int n,i,j;

void funkcija() {
    
    cout<< "ievadiet trijstura apmakšējās malas garumu"<< endl;

    cin >> n;
    
    if (n % 2 == 0) {//pāris/neparis
        for(i = 0; i <=n/2-1; i++)//ciklu skaitu samazinam 1/2 un -1
        {

        for(j = 0; j <=i*2+1; j++)//ciklu skaitu palielinam *2 + 1
        {
        cout << "* ";
        }
        cout << endl;
        }
    } else {
        for(i = 0; i <=n/2; i++)//ciklu skaitu samazinam 1/2
        {

        for(j = 0; j <=i*2; j++)//ciklu skaitu palielinam *2
        {
        cout << "* ";
        }
        cout << endl;
        }
    }
    

}
    

int main() {
    
    funkcija();

    return 0;
}
