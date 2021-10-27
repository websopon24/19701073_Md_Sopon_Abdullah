#include<bits/stdc++.h>

using namespace std;


int main()
{
  int a,b,c,m;

  cin>>a>>b>>c;

  int sum=abs(a-b)+abs(a-c);

      m=sum;

  sum=abs(b-a)+abs(b-c);
  if(sum<m)
     m=sum;

  sum=abs(c-a)+abs(c-b);
  if(sum<m)
     m=sum;

     cout<<m<<endl;









return 0;   }
