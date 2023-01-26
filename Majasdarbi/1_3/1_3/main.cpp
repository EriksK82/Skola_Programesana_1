//
//  main.cpp
//  1_MD_3_uzd
//
//  Created by Eriks Karklins on 10/11/2022.
//

#include <iostream>


using namespace std;

int main()
{
    int num, guess, tries = 0;
    
    num = rand() % 100 + 1;
    cout << "Spēle Uzmini skaitli - Min programma" << endl<< endl;

    do
    {
        cout << "Programmas skaitļa minējums no 1 līdz 100 : "<< endl;
        guess = 1 + (rand() % 100);
        tries++;

        if (guess == num)
        cout << "skaitlis uzminēts no " << tries << " mēģinājuma" << endl;

        else if (guess < num)
            cout << "skaitlis ir mazāks par ievadīto" << "  "<< guess <<endl << endl;
        
        else if (guess > num)
            cout << "skaitlis ir lielāks par ievadīto"<< "  "<<  guess  <<endl << endl;
        
  
    } while (guess != num && tries <= 10);
        if (tries >= 10)
            cout << "Programma zaudēja! Pareizā atbilde  " << "  "<< num << endl;

    return 0;
}
