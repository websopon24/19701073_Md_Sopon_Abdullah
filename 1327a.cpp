#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);


   int tc;
   cin>>tc;


    while(tc--)
    {


 long long n,k;

 cin>>n>>k;

 if(k*k>n) cout<<"NO"<<endl;

 else if(n>=k*k && !((n+k)%2) ) cout<<"YES"<<endl;

 else
    cout<<"NO"<<endl;
    }




return 0;   }
 
