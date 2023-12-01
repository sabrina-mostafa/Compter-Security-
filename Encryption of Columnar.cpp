///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

///         Originator : Sabrina Mostafa_C201265
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, m, x, y, c ;
    string s, k ;
    cout<<"Enter the message to encrypt(without space) : " ;
    cin>>s ;
    cout<<"Enter key : " ;
    cin>>k ;

    x = k.size() ;
    y = (s.size()/x) ;
    if(s.size()%x!=0) y++ ;
    char ch[y][x] ;

    bool f=0 ;
    m=0 ;
    for(i=0; i<y; i++)
    {
        for(j=0; j<x; j++)
        {
            if(m>=s.size())
                ch[i][j] = 'X' ;
            else
                ch[i][j] = s[m++] ;
        }
    }

    map<int, int>mp ;
    for(i=0; i<k.size(); i++)
    {
        c = k[i] - '0' ;
        mp[c] = i ;
    }

    cout << "\nEncrypted message : " ;
    for(auto i: mp)
    {
        c = i.second ;
        for(j=0; j<y; j++)
            cout<<ch[j][c] ;
    }


    return 0;
}
