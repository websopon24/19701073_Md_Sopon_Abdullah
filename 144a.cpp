
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n],b[n];

    int mi,mxi;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];


    }

    int x=10000,y=-3;

    for(int i=0;i<n;i++)
    {
      if(a[i]<=x)
      {
        x=a[i];

        mi=i;

      }


       if(a[i]>y)
      {

       y=a[i];

        mxi=i;
       //cout<<y;
      }


    }




  //cout<<mi<<mxi<<endl;
  int s= (n-mi-1)+mxi;

  (mi<mxi)? s--:s;

  cout<<s<<endl;


return 0;   }
