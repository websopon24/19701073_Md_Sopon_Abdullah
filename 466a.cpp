
#include<bits/stdc++.h>

using namespace std;


int main()
{
  int n,m,a,b;

  cin>>n>>m>>a>>b;

  int s=n/m *b;
      int s1=s+b;

    int s2=s+ n%m*a;

    int s3=n*a;

    int k = min(s1,s2);

      k = min(k,s3)  ;

     cout<<k<<endl;




return 0;   }
