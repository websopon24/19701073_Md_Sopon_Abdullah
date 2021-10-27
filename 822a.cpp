#include<bits/stdc++.h>

using namespace std;




int main()
{
  ios::sync_with_stdio(0);

  long long a,b;

  cin>>a>>b;

  long long f=1, d=min(a,b);

 //cout<<d<<endl;

  for(int i=d;i>=1;i--)
  {
       f=f*i;
  }



  cout<<f<<endl;


return 0;   }
 
