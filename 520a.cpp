
#include<bits/stdc++.h>

using namespace std;


int a[26];

int main()
{
    int n,i;

    cin>>n;

    char str;


    for(i=0; i<n; i++)
    {
       cin>>str;
       str=tolower(str);


       a[str-'a'] = 1;


    }

    for(i=0; i<26; i++)
    {
        if(a[i]==0)
        {
            cout<< "NO"<<endl;
            return 0;

        }


    }

    cout<<"YES\n";

}
