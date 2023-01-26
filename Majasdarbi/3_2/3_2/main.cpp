#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
int main();
int ai();
int choice;
void board();

int veids;
char mark;
int atk;

// v1 speletajs pret speletaju
int v1()
    {
        int player = 1,i,choice;
    
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Spelētājs " << player << ", ievadiet izvēli:  ";
        cin >> choice;


        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"kļūdais gājiens ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aSpēlētājs"<<--player<<" uzvarēja "<< endl;
    else
        cout<<"==>\aNeizšķirts";
    
    cout << "vai spēlēsiet vēlreiz" << endl<< endl;
    cout <<"Jā - 1; Nē -2"<< endl;
    cin >> atk;
    
    if (atk == 1) {
        return main();
        
    } else if (veids == 2) {
        return 0;
      }

    return 0;
}

// v2 speletajs pret datoru
int v2()
    {
        int player = 1,i,choice;
    
    do
    {
        board();
        player=(player%2)?1:2;
        
        if (player == 1){
            cout << "Spēlētājs" << player << ", Ievadiet izvēli:  ";
            cin >> choice;}
        else if(player == 2){
            //choice = 1+rand()%+9;
            choice = ai();
            cout << choice << endl;

        }


        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"kļūdains gājiens ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aSpēlētājs"<<--player<<" uzvarēja "<< endl;
    else
        cout<<"==>\aNeizšķirts"<< endl;
    
    cout << "vai spēlēsiet vēlreiz" << endl<< endl;
    cout <<"Jā - 1; Nē -2"<< endl;
    cin >> atk;
    
    if (atk == 1) {
        return main();
        
    } else if (veids == 2) {
        return 0;
      }

    return 0;
}

// uzvaras pārbaude

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

// laukums

void board()
{

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}


// datora smadzenes// izvēlas gājienu pēc aktuālās situācijas uz spēles lauka, vēl jāmācās lai paredzētu oponenta gājienus :)
int ai()

{
    //uzbrukums//aizsardzība
    if ( square[2] == square[3] || square[4] == square[7] || square[5] == square[9])
        
        return 1;
    else if (square[1] == square[3] || square[5] == square[8])

        return 2;
    else if (square[1] == square[2] || square[6] == square[9] || square[5] == square[7])

        return 3;
    else if (square[1] == square[7] || square[5] == square[6])

        return 4;
    else if (square[1] == square[9] || square[3] == square[7] || square[2] == square[8] || square[4] == square[6])

        return 5;
    else if (square[3] == square[9] || square[5] == square[4])

        return 6;
    else if (square[1] == square[4] || square[8] == square[9] || square[5] == square[3])

        return 7;
    else if (square[7] == square[9] || square[5] == square[2])

        return 8;
    else if (square[7] == square[8] || square[3] == square[6] || square[5] == square[1])

        return 9;
    //lai neliek aizņemtajos laukos
    else if ( square [1] != 'X' && square [1] != 'O')
        
        return 1;
    else if ( square [2] != 'X' && square [2] != 'O')
        
        return 2;
    else if ( square [3] != 'X' && square [3] != 'O')
        
        return 3;
    else if ( square [4] != 'X' && square [4] != 'O')
        
        return 4;
    else if ( square [5] != 'X' && square [5] != 'O')
        
        return 5;
    else if ( square [6] != 'X' && square [6] != 'O')
        
        return 6;
    else if ( square [7] != 'X' && square [7] != 'O')
        
        return 7;
    else if ( square [8] != 'X' && square [8] != 'O')
        
        return 8;
    else if ( square [9] != 'X' && square [9] != 'O')
        
        return 9;
    
    else
        
        return 0; //tehniski līdz šim nenonāks, vai ir jāraksta?
}

// galvenā funkcija
int main()
{
    
    cout << endl <<"Spēle - Krustiņi un nullīši"<< endl << endl;
    cout << "Izvēlaties spēles veidu"<< endl << endl;
    cout << "persona pret personu - 1" << endl << endl;
    cout << "persona pret datoru - 2"<< endl;
    
    cin >> veids;
    
    if (veids == 1) {
        cout << v1();
    } else if (veids == 2) {
        cout << v2();
      }
}

