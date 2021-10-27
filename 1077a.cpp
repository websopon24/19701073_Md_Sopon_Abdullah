#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
int tc;
cin>>tc;
while(tc--)
    { long long int a,b,k;
      long long x=0;

    cin>>a>>b>>k;

      if(k%2)
            x+=a*(k/2+1);
       else
             x+=a*(k/2);


            x-=b*(k/2);


    cout<<x<<endl; }

    return 0;
}
 
