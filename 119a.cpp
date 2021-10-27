#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);


  int a,b,n;
  cin>>a>>b>>n;

  while(1)
  {
      int l= __gcd(a,n);

      if(n<l)
      {

          cout<<"1"<<endl;
          break;
      }
       n-=l;

      l=__gcd(b,n);

      if(n<l)
      {

          cout<<"0"<<endl;
          break;
      }
     n-=l;



  }




return 0;   }
 
