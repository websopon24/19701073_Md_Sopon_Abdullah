#include<bits/stdc++.h>

using namespace std;



int main()
{
    int m,n;
    cin>>n>>m;
    //int a[n][n];
    int t=0;

     for(int i=1;i<=n;i++)
      {
          if(m%i==0 && m/i<=n)
            t++;
      }


    cout<<t;

return 0;   }
 
