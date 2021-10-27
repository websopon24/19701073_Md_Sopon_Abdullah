#include<bits/stdc++.h>

using namespace std;

int k;

int main()
{
  ios::sync_with_stdio(0);

  string t,m;




  cin>>t;
  for(int i=0;i<5;i++)
  {
      cin>>m;
      if(m[0]==t[0] || m[0]==t[1]||m[1]==t[0] || m[1]==t[1])
        k=1;


  }

   if(k) cout<<"YES"<<endl;

   else cout<<"NO"<<endl;








return 0;   }
 
