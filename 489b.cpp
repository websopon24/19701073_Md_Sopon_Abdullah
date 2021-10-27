
#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);


   int n,m;

   cin>>n;

   int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);

    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];

     sort(b,b+m);

     int t=0;



          for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                  if(abs(a[i]-b[j])<=1)
                  {
                      b[j]=-7;
                      t++;
                      break;
                  }
               }
           }



     cout<<t<<endl;






return 0;   }
 
