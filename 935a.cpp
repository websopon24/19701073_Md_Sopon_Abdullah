#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;

  cin>>n;
  int t=0;

  for(int i=1;i<n;i++)
  {
      if(n%i==0)
      {
          t++;
      }
  }

  cout<<t<<endl;

return 0;   }
 
