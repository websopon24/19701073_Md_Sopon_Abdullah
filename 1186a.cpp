#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n,nt,p;

  cin>>n>>nt>>p;

 p = min(nt,p);

  if(p>=n)
  {

      cout<<"Yes"<<endl;
  }

  else
    cout<< "No"<<endl;


return 0;   }
 
