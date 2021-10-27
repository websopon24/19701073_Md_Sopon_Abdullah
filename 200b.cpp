
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int a;
   cin>>n;
    int  sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }

    printf("%0.12lf",(double)sum/n);

    return 0;
}
