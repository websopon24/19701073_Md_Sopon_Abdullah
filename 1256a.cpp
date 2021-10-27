#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int tc;
  cin>>tc;
  while(tc--)
  {
      int a,b,n,s;

      cin>>a>>b>>n>>s;

      int d=  (min(s/n,a)*n+b);

     if(d>=s)
      cout<<"yes"<<endl;

      else cout<<"NO"<<endl;


  }






return 0;   }
 
