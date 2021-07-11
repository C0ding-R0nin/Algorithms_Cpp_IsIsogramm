#include <iostream>
using namespace std;

class MyAppClass
{
    public:

    void GetUserInput();
    void SetHiddenWord(string HWStr);
    bool IsIsogram(string str);

    private :
    
    string HiddenWord;
    string UserInput;
};
MyAppClass MyApp;

void MyAppClass::GetUserInput()
{

    do
    {
        cout << " Input Word with " << HiddenWord.length() << " characters \n :";
        cin >> UserInput;

        if (!IsIsogram(UserInput))
        {
            cout << ("Kein Isogram .");
        }
        // if not
        else cout << ("Richtig !");
    }    
    while (UserInput != "exit");


    cout << ("Programm wird beendet");
};

bool MyAppClass::IsIsogram(string str)
{
    cout << " Length of String : " << str.length() << "\n";
    cout << " Start isogram check...\n";
    int i , i2 ;
    for ( i = 0 ; i < str.length() ; i++)
    {
        cout << "Run Counter i : " << i << " Run Counter i2 : " << i2 << " Char = " << str[i] <<"\n";
        for ( i2 = 0; i2 < str.length(); i2++)
        {
            cout << "    i = " << i <<       " i2 = " << i2 << "\n" ;
            cout << "Compare " << str[i2] << " with " <<  str[i] ;
            if ((str[i2] == str[i]) && (i2 != i))
            {
                cout << " Equals \n";
                return true;
            }
            else cout << " Not Equal \n";

        }
    }
    
return false;
}

void MyAppClass::SetHiddenWord(string HWStr)
{
    HiddenWord=HWStr;
}




//_____________________________________________________________________________________________________________________________________________
int main ()                 
{
    MyApp.SetHiddenWord("cakes");
    MyApp.GetUserInput();

    return 0;
}
//______________________________________________________________________________________________________________________________________________

