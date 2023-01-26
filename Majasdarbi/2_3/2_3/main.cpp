//
//  main.cpp
//  2MD_3UZD
//
//  Created by Eriks Karklins on 14/11/2022.


#include <iostream>

using namespace std;


int kmh1, kmh2, km, Vkmh, V1, V2, m_km = 1000, s_h = 3600, time_s, dis, coalision;

int vms(int Vkmh) {// ja int tad absolūti skaitļi, pienemu kā uzdevuma nosacījumu!
    int vms = (Vkmh * m_km)/s_h;
    return vms;
}

int meet_time(int kmh1, int kmh2, int km){
    V1 = vms (kmh1);
    V2 = vms (kmh2);
    dis = km * m_km;
    coalision = (dis/(V1+V2));
    return coalision;
}

int main() {
    
    cout << " ievadiet pirmā auto ātrumu km/s" << endl;
    cin >> kmh1;
    cout << " ievadiet otrā auto ātrumu km/s" << endl;
    cin >> kmh2;
    cout << " ievadiet attālumu km starp auto" << endl;
    cin >> km;
    
    time_s = meet_time (kmh1, kmh2, km);
    
    cout << time_s << " sekundes " << endl;
    
    return 0;
}
