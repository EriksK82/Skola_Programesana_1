//
//  main.cpp
//  4MD_2
//
//  Created by Eriks Karklins on 18/12/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <stdio.h>

using namespace std;


//vardu pildīšana
int burtuPildisana(char burts, string vards, string& nezinamais)
{
  int i;
  int matches = 0;
  int len = vards.length();
  for (i = 0; i < len; i++)
  {
    if (burts == nezinamais[i])
      return 0;

    if (burts == vards[i])
    {
      nezinamais[i] = burts;
      matches++;
    }
  }
  return matches;
}

// Pamata funkcija
int main() {
    
    string minejums;
    char burts;
    
    // Soda punkti
    int sodaPunkti = 10;
    int sodaPunktuSkaits = 0;
    
    int piegajieni = 0;
    int varduSkaits = 20;
    // speles noteikumi
    
    cout << "Spēle “Vārdu minēšana” uzmini valsts nosaukumu angliski" << endl << endl;
    cout << "Jums ir jāatmin vārdi pa burtiem" << endl << endl; //
    cout << "Par nepareizo burtu 1 soda punkts" << endl << endl;
    cout << "Par atminētu vārdu tiek noņemti 5 soda punkti vai to skaits samazinās līdz 0" << endl << endl;
    cout << "Lai pārtrauktu spēli ievadiet '0' " << endl << endl;
    
    // cikls lai minētu visus vārdus
    while (piegajieni != varduSkaits && sodaPunktuSkaits != sodaPunkti && burts != '0') {
        
        // minamie vārdi
        string vards;
        string vardi[] =
        {
            "Algeria",
            "Australia",
            "Austria",
            "Bolivia",
            "Brunei",
            "Burundi",
            "Cambodia",
            "Chad",
            "China",
            "Croatia",
            "Cuba",
            "Denmark",
            "Dominica",
            "Egypt",
            "Estonia",
            "Ethiopia",
            "Finland",
            "Greece",
            "India",
            "Latvia"
        };
        
        srand(time(NULL));
        int n = rand() % varduSkaits;
        vards = vardi[n];
        
        string nezinamais(vards.length(), ('.'));
        
        piegajieni++;
        
        // speles cikls
        while (vards != nezinamais && sodaPunktuSkaits != sodaPunkti && burts != '0') {
           
            cout << "Ievadiet burtu" << endl << endl;
            cout << nezinamais<< endl;
                
            // Burta ievade bez enter MAC datoriem
            system("stty raw");
            burts = getchar();
            system("stty cooked");

            // aizpildam slepto vardu
            if (burts == '0'){
                cout << endl;
            }
            
            else if (burtuPildisana(burts, vards, nezinamais) == 0){
                cout << endl << "Šāda burta nav" << endl<< endl;// ja nav uzminēts burts
                  sodaPunktuSkaits++;
            }
            else if (vards == nezinamais) {
                cout << endl << "Vards _" << vards <<"_ uzminēts" << endl << endl;//ja ir uzminēts vards
            }
            else
            {
              cout << endl << "Burts uzminēts" << endl << endl;//ja ir uzminēts burts
            }
            
        }
        
        if (vards == minejums && sodaPunktuSkaits >= 5){
            sodaPunktuSkaits = sodaPunktuSkaits -5;
        }
        else if (vards == minejums && sodaPunktuSkaits < 5){
            sodaPunktuSkaits = sodaPunktuSkaits - sodaPunktuSkaits;
            
        }
    }
    
    // ja cikls izpildās
    
    if (burts == '0'){
        cout << "Jūs pārtraucāt spēli ievadot: "<<"'0'"<< endl;
    }
    else if (sodaPunktuSkaits >= sodaPunkti) {
        cout << "Jūs zaudējāt "<<"Soda punktu skaits: "<<sodaPunktuSkaits<<" Atminēto vārdu skaits: "<<piegajieni-1<<endl;
    }
    else
        cout << "Jūs uzvarējāt!!! "<<" Atminēto vārdu skaits: "<<piegajieni<<endl;
    
    return 0;
  
}
