#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int t;

  cin>>t;

  while(t--)
  {
      int a,b;

      cin>>a>>b;





      cout<<(a%b==0? a%b :b-a%b)<<endl;

  }
}
