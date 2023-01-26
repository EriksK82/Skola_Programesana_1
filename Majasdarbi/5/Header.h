//
//  Header.h
//  5_MD
//
//  Created by Eriks Karklins on 14/01/2023.
//

#ifndef Header_h
#define Header_h


using namespace std;

struct Bank_Account    // klienta dati clientData
{
    
    int Money_Deposit; // balanss (kontā esošā summa vai parāds)
    char type;
    int accNum;
    char Sur[15];    // uzvārds
    char Name[10];    // vārds
    public:
    
    
    void report() const;
    int retMoney_Deposit() const;
    void create_Bank_Account();
    void dep(int);
    int retacno() const;
    void Display_Account() const;
    void debitors() const;
    char rettype() const;
    void changes(int);
};

// Izveidot kontu "pievienot ierakstu" - Case '1'
void Bank_Account::create_Bank_Account()
{
    cout<<"Izveidojiet kont Nr. :";
    cin>>accNum;
    cout<<"Ievadiet konta īpašnieka vārdu : ";
    cin>>Name;
    cout<<"Ievadiet konta īpašnieka vārdu : ";
    cin>>Sur;
    cout<<"Depozīta apjoms:";
    cin>>Money_Deposit;
    cout<<"Bankas konts izveidots";
}


// konta izvadīšana
void Bank_Account::Display_Account() const
{
    cout<<"Konta Nr: "<<accNum<< endl;
    cout<<"Vārds : ";
    cout<<Name<< endl;
    cout<<Sur<< endl;
    cout<<"Atlikums: "<<Money_Deposit<<endl<<endl;
}

//atgriezt konta nr.
int Bank_Account::retacno() const
{
    return accNum;
}

//Visi ieraksti
void Bank_Account::report() const
{
    cout<<accNum<<setw(10)<<" "<<Name<<setw(10)<<" "<<Sur<<setw(10)<<" "<<setw(6)<<Money_Deposit<<endl;
}

// debitori
void Bank_Account::debitors() const
{
    if(Money_Deposit<0){
        cout<<accNum<<setw(10)<<" "<<Name<<setw(10)<<" "<<Sur<<setw(10)<<" "<<setw(6)<<Money_Deposit<<endl;
    }
    
}

//konta izmaiņas +/- case '5'
void Bank_Account::changes(int x)
{
    Money_Deposit+=x;
}


void write_Bank_Account();
void display_sp(int);
void display_all();
void delete_Bank_Account(int);
void Money_Deposit_changes(int, int);
void display_deb();
void display_No();


// Izveidot kontu "pievienot ierakstu" - Case '1'
void write_Bank_Account()
{
    Bank_Account ac;
    ofstream outFile;
    outFile.open("Bank_Account.txt",ios::binary|ios::app);
    ac.create_Bank_Account();
    outFile.write(reinterpret_cast<char *> (&ac), sizeof(Bank_Account));
    outFile.close();
}
// dzēst ierakstu - Case '2'
void delete_Bank_Account(int n)
{
    Bank_Account ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open("Bank_Account.txt",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    outFile.open("Temp.dat",ios::binary);
    inFile.seekg(0,ios::beg);
    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account)))
    {
        if(ac.retacno()!=n)
        {
            outFile.write(reinterpret_cast<char *> (&ac), sizeof(Bank_Account));
        }
    }
    inFile.close();
    outFile.close();
    remove("Bank_Account.txt");
    rename("Temp.dat","Bank_Account.txt");
    cout<<"Konts ir dzēsts";
}

// konta informācija Case '3', '4'
void display_sp(int n)
{
    Bank_Account ac;
    bool flag=false;
    ifstream inFile;
    inFile.open("Bank_Account.txt",ios::binary);
    if(!inFile)
    {
        cout<<"Failu nevar atvērt";
        return;
    }
    cout<<"Konta informācija"<< endl;
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account)))
    {
        if(ac.retacno()==n)
        {
            ac.Display_Account();
            flag=true;
        }
    }
    inFile.close();
    if(flag==false)
        cout<<"Konta nummurs neeksistē";
}

// izvadīt visus ierakstus  - Case '3'
void display_all()
{
    Bank_Account ac;
    ifstream inFile;
    inFile.open("Bank_Account.txt",ios::binary);
    if(!inFile)
    {
        cout<<"Failu nevar atvērt";
        return;
    }
    cout<<"Visi ieraksti"<< endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<< endl;
    cout<<"Konta Nr.  Vārds          Uzvards             atlikums"<< endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<< endl;

    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account)))
    {
        ac.report();
    }
    inFile.close();
  
}

//Debitori case '6'
void display_deb()
{
    Bank_Account ac;
    ifstream inFile;
    inFile.open("Bank_Account.txt",ios::binary);
    if(!inFile)
    {
        cout<<"Failu nevar atvērt";
        return;
    }
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<< endl;
    cout<<"Konta Nr.  Vārds          Uzvards             atlikums"<< endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<< endl;

    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account)))
    {
        
        ac.debitors();
        
    }
    inFile.close();
  
}

//kontu skaits case '7
void display_No()
{
    Bank_Account ac;
    ifstream inFile;
    inFile.open("Bank_Account.txt",ios::binary);
    if(!inFile)
    {
        cout<<"Failu nevar atvērt";
        return;
    }
   
    int i;
    i=0;

    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account)))
    {
        i++;
        cout<< "Ierakstu skaits :"<<i<< endl;
    }
    
    inFile.close();
}


// Naudas ieskatīšana izņemšana case '5'
void Money_Deposit_changes(int n, int option)
{
    int amt;
    bool found=false;
    Bank_Account ac;
    fstream File;
    File.open("Bank_Account.txt", ios::binary|ios::in|ios::out);
    if(!File)
    {
        cout<<"Failu nevar atvērt";
        return;
    }
    while(!File.eof() && found==false)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(Bank_Account));
        if(ac.retacno()==n)
        {
            ac.Display_Account();

            if(option==1)
            {
                cout<<"Konta bilances izmaiņas"<< endl;
                cout<<"ievadiet summu ko vēlaties noguldīt (+) vai izņemt (-): "<< endl;
                cin>>amt;
            
                    ac.changes(amt);
              }
            int pos=(-1)*static_cast<int>(sizeof(ac));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(Bank_Account));
            cout<<"Izmaiņas veiktas";
            found=true;
           }
         }
    File.close();
    if(found==false)
        cout<<"Ieraksts nav atrasts";
}

#endif /* Header_h */


