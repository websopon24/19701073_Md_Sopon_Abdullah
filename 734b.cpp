#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int k2,k3,k5,k6;

  //256 32;

  cin>>k2>>k3>>k5>>k6;

  int k = min(k2,min(k5,k6));
    k2-=k;
    k5-=k;
    k6-=k;

    int l=min(k3,k2);

    cout<<(256*k+l*32)<<endl;


return 0;   }
 
