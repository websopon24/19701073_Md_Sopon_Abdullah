
#include<bits/stdc++.h>

using namespace std;


int main()
{
    //ios::sync_with_stdio(0);

    int n,l;

    double x;

    cin>>n>>l;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

        sort(a,a+n);


    double m=a[0]-0;

     for(int i=1;i<n;i++)
     {
         x=(a[i]-a[i-1])/2.0;

        m=max(m,x);

     }

        x=(l-a[n-1]);

          m=max(m,x);

          printf("%0.10f",m);
}
