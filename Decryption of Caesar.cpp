///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

///         Originator : Sabrina Mostafa_C201265
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;


int main()
{
    string message ;
    char ch ;
    int i, key ;

    cout <<"Enter a message to decrypt : " ;
    getline(cin, message) ;
    cout << "Enter the key : " ;
    cin >> key ;

    for(i=0; message[i] != '\0'; i++)
    {
        ch = message[i] ;
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - key ;
            if(ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1 ;
            }
            message[i] = ch ;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key ;
            if(ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1 ;
            }
            message[i] = ch ;
        }
    }

    cout << "Decrypted message: " << message;
    return 0;
}
