#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {

            sum+=a[i];
        }

       else if(a[i]==-1 && sum>0)
       {
           a[i]=0;
           sum--;
       }

    }
    sum=0;

    for(int i=0;i<n;i++)
    {

        if(a[i]==-1)
        {

            sum++;
        }
    }



  cout<<sum<<endl;


return 0;   }
