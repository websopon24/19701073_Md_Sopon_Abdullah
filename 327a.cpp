#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;
  int a;

  int o=0,z=0,m=-1;

  for(int i=0;i<n;i++)
  {
      cin>>a;
      if(a==1)
      {
          o++;

          if(z>0) z--;
      }

      else
      {
          z++;
          m=max(m,z);
      }
  }


   cout<<m+o<<endl;


return 0;   }
 
