//
//  main.cpp
//  2MD_2
//
//  Created by Eriks Karklins on 13/11/2022.
//

#include <iostream>

using namespace std;


double min_maks_h = 2, max_maks_h = 10, maks_sol = 0.5, laiks = 0, max_stav_L = 24, maksa;


double apr_Maksa(double maksa){
    double maksa_M = min_maks_h + ((laiks -3 ) * maks_sol);
    return maksa_M;
}

int main() {
    
    cout << " ievadiet stāvēšanas laiku stundās" << endl;
    cin >> laiks;
    
    maksa = apr_Maksa(laiks);

    if (laiks > max_stav_L){
        cout << " Pārsniegts atļautais laiks 24h" << endl;
    } else if (maksa >= max_maks_h ) {
        cout << "Veiciet apmaksu " << max_maks_h << " Ls " <<endl;
    } else if (laiks <= 3){
        cout << "Veiciet apmaksu " << min_maks_h << " Ls " << endl;
    } else if (laiks > 3){
        cout << "Veiciet apmaksu " << maksa << " Ls " << endl;
    } else {
        
    }
     
    return 0;
}
