//
//  main.cpp
//  1_MD_2_uzd
//
//  Created by Eriks Karklins on 10/11/2022.
//

#include <iostream>


using namespace std;

int main()
{
    int num, guess, tries = 0;
    
    num = rand() % 100 + 1;
    cout << "Spēle Uzmini skaitli" << endl<< endl;

    do
    {
        cout << "Ievadi minējumu no 1 līdz 100 : "<< endl;
        cin >> guess;
        tries++;

        if (guess == num)
        cout << "skaitlis uzminēts no " << tries << " mēģinājuma" << endl;

        else if (guess < num)
            cout << "skaitlis ir mazāks par ievadīto" << endl << endl;
        
        else if (guess > num)
            cout << "skaitlis ir lielāks par ievadīto"<< endl << endl;
        
  
    } while (guess != num && tries <= 10);
        if (tries >= 10)
            cout << "Jūs zaudējat! Pareizā atbilde  " << num << endl;

    return 0;
}

