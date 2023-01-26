//
//  main.cpp
//  5_MD
//
//  Created by Eriks Karklins on 14/01/2023.
//

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
    char ch;
    int num;
    do
    {
        cout << "Banka" << endl
             << endl;

        cout << "IZVĒLNE" << endl
             << endl;
        cout << "1. Pievienot ierakstu" << endl;
        cout << "2. Dzēst ierakstu" << endl;
        cout << "3. Izvadīt visus ierakstus" << endl;
        cout << "4. Atrast ierakstu" << endl;
        cout << "5. Izmainīt konta balansu" << endl;
        cout << "6. Izvadīt parādniekus" << endl;
        cout << "7. Ierakstu skaits" << endl;

        cout << "8. Iziet" << endl
             << endl;

        cout << "Veicat izvēli (1-8):";
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
            write_Bank_Account();
            break;

        case '2':
            cout << "Ievadiet konta nummuru:";
            cin >> num;
            delete_Bank_Account(num);
            cout << endl;
            break;

        case '3':
            display_all();
            break;

        case '4':
            cout << "Ievadiet konta nummuru:";
            cin >> num;
            display_sp(num);
            cout << endl;
            break;

        case '5':
            cout << "Ievadiet konta nummuru:";
            cin >> num;
            Money_Deposit_changes(num, 1);
            cout << endl;
            break;

        case '6':
            cout << "Debitori:";
            display_deb();
            cout << endl;
            break;

        case '7':
            cout << "Ierakstu skaits:";
            display_No();
            break;

        case '8':
            cout << "Jūs izvēlējāties iziet" << endl;
            return 0;

        default:
            cout << "\a";
        }
        cin.ignore();
        cin.get();
    } while (ch != '8');
    return 0;
}
