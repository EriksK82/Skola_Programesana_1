//
//  main.cpp
//  1_MD_a
//
//  Created by Eriks Karklins on 10/11/2022.
//

#include <iostream>
using namespace std;

int main()
{

    int i, num, rem, rev;
    
    cout << "ievadiet skaitli" << endl;

    cin >> i;
  
    num = i;
    
    for (rev=0; num!=0; num=num/10){
        rem = num%10;
        rev = rem + (rev*10);
    }
    
    if ( i == rev) {
      cout << i << " ir Polidroms" << endl;
    } else {
      cout << i <<  " nav Polidroms" << endl;
    }
      
  return 0;
}
