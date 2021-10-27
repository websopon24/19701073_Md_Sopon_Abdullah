#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;
  int m[n][n];
   for(int i=0;i<n;i++)
   {
       m[0][i]=1;
       m[i][0]=1;
   }
    //cout<<m[0][3];

  int t=1;

   for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
           m[i][j]=m[i][j-1]+m[i-1][j];

           t=max(t,m[i][j]);
        }
    }


  cout<<t<<endl;



return 0;   }
 
