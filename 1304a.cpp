#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int tc;
  cin>>tc;

  while(tc--)
  {

  int x,y,a,b;

  cin>>x>>y>>a>>b;

  if((y-x)%(a+b))
  cout<<"-1"<<endl;

  else cout<<(y-x)/(a+b)<<endl;

  }


return 0;   }
 
