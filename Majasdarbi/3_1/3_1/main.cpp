//
//  main.cpp
//  3MD_1UZD
//
//  Created by Eriks Karklins on 27/11/2022.

#include <iostream>
using namespace std;

int n;
int main()
{
    cout << "ievadiet skaitļu masīva NxN izmēru:" << endl;
    cin >> n;
        cout << endl;

    cout << "izejas masīvs:" << endl;
        cout << endl;

    int N=n,M=n;
    int a[N][M];//rindas kolonass
    
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
                a[i][j] = rand()% 90+10;
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
                cout << a[i][j] << " ";
        cout << endl;
    }
        cout << endl;
    
    
     cout << "pagriezts pa 90 grādiem pulksteņrādītāja virzienā:" << endl;
        cout << endl;
    
int pag;
for (int i=0; i<N/2; i++){
        for (int j=i; j<N-i-1; j++){
                pag=a[i][j];
                a[i][j] = a[N - 1 - j][i];
                a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
                a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
                a[j][N - 1 - i] = pag;
        }
}
    
for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            
        cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
return 0;
}
