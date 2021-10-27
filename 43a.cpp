#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;
  string p,q,s[n];

  map<string,int>m;

  for(int i=0;i<n;i++)
  {
     cin>>s[i];
      if(i==0)
      {
         p=s[i];
      }
      else if(s[i]!=p)
      {
         q=s[i] ;
      }

      m[s[i]]++;
  }

  cout<<( m[p]>m[q]? p:q)<<endl;



return 0;   }
 
