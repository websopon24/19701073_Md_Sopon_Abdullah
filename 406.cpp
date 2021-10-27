
#include<bits/stdc++.h>

using namespace std;


int main()
{
  int n,m;
  cin>>n>>m;
  int j=1;
  int c=0;
  while(n)
  {
      c++;
      n--;
      if(c==j*m)
      {
          j++;
          n++;
      }

  }


   cout<<c<<endl;


return 0;   }
