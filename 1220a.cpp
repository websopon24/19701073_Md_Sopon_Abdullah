#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int z=0,n=0;

    int m;

    cin>>m;
    string s;

    cin>>s;

    for(int i=0; i<m; i++)
    {

        if(s[i]=='n')
            n++;

        else if(s[i]=='z')
            z++;
    }

    while(n--)
        cout<<"1"<<" ";

    while(z--)
        cout<<"0"<<" ";

   cout<<endl;

    return 0;
}
 
