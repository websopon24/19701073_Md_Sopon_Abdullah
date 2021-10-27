#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    long long n,x;

    cin>>n>>x;

    char a;
    long long y;

    long long m=0;

    for(int i=0; i<n; i++)
    {

        cin>>a>>y;

        if(a=='+')
            x+=y;

        else if(x>=y)
            x-=y;

        else
            m++;


    }


    cout<<x<<" "<<m<<endl;

    return 0;
}
 
