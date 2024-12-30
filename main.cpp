#include <iostream>
#include<bits/stdc++.h>

using namespace std ;


int main()
{
    int n;
    cin >> n ;
    int a[26]={};
    for(int i = 0 ; i < n ; i++)
    {
        char s;
        cin >> s ;
        a[((int)s - 97  )]++;
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        while(a[i]!=0)
        {
            cout << (char)(i+97);
            a[i]--;
        }
    }


    return 0;
}
