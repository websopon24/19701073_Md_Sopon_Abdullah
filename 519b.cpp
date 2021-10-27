#include<bits/stdc++.h>

using namespace std;

long long int s[4];

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin>>n;
    //cout<<"m"<<s[1]<<endl;
    int a,b,c;
    for(int i=0; i<n; i++)
    {
        cin>>a;

        s[1]+=a;

    }

    for(int i=0; i<n-1; i++)
    {
        cin>>b;

        s[2]+=b;

    }

    for(int i=0; i<n-2; i++)
    {
        cin>>c;

        s[3]+=c;

    }

    cout<<(s[1]-s[2])<<endl<<(s[2]-s[3])<<endl;


    return 0;
}
 
