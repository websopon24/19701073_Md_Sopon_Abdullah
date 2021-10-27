#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;

    cin>>n;

    int a[n];

    int m=-4;

    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        if(a[i]>m)
            m=a[i];

    }

    int sum=0;

     for(int i=0;i<n;i++)
    {

       sum+=m-a[i];

    }

    cout<<sum<<endl;


return 0;   }
