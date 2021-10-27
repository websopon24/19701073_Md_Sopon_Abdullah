
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,k;
    int r,i;

    cin>>n>>k;

    for(i=1;i<=k;i++)
    {
       r = n%10;

       if(r)
        n = n -1;

       else
        n= n/10;
    }

    cout<<n;


    return 0;
}
