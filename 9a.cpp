#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int a,b;
  cin>>a>>b;

  int d= 6-max(a,b)+1;

  int i=d;
  while(i>=2)
  {
      if(d%i==0 && 6%i==0)
      { printf("%d/%d",d/i,6/i);

         return 0;
      }
     i--;
  }


   printf("%d/%d",d,6);

return 0;   }
 
