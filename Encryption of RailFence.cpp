///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

///         Originator : Sabrina Mostafa_C201265
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n, i, j ;
    string s ;
    cout<<"Enter the message to encrypt(without space) : " ;
    cin>>s ;
    cout<<"Enter key : " ;
    cin>>n;

    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    j=0;
    bool flag=0;

    for(i=0; i<s.size(); i++)
    {
        a[j][i] = s[i] ;
        if(j==n-1)
        {
            flag=1 ;
        }
        else if(j==0)
            flag=0 ;

        if(flag==0)
        {
            j++ ;
        }
        else j-- ;
    }

    cout << "\nEncrypted message : " ;
    for(i=0; i<n; i++)
    {
        for(j=0; j<s.size(); j++)
        {
            if(a[i][j]!=' ')
                cout<<a[i][j] ;
        }
    }
    cout<<'\n' ;

    return 0;
}
