
#include<bits/stdc++.h>

using namespace std;


int main()
{


  string a,b,c;

  cin>>a>>b>>c;
  a+=b;
  sort(a.begin(),a.end());
  sort(c.begin(),c.end());
  //cout<<a<<endl;
   //cout<<c<<endl;
  (a==c)?puts("YES"):puts("NO");




return 0;   }
