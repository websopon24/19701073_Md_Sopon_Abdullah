#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n,m;
  cin>>n>>m;

  int l=min(n,m);

  int c=0;

   for(int a=0;a<=l;a++)
    {
        for( int b=0;b<=l;b++)
        {
           if(n==a*a+b && m==a+b*b)
            c++;
        }
    }


     cout<<c<<endl;

return 0;   }
 
