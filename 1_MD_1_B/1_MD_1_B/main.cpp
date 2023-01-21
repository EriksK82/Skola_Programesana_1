//
//  main.cpp
//  1_MD_b
//
//  Created by Eriks Karklins on 10/11/2022.
//

#include <iostream>
using namespace std;

int main()
{

    int num, rem, rev;

      for (int i = 100000; i < 999999; i++) {
  
    num = i;
    
    for (rev=0; num!=0; num=num/10){
        rem = num%10;
        rev = rem + (rev*10);
    }
    
    if (i == rev) {
    cout << i <<"\n";
      }
      }
  return 0;
}
