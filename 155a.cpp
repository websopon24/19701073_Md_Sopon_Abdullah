
#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int n;

    int a[1000];
    cin>>n;

    int m;
    int t=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m=0;

        for(int j=i-1; j>=0; j--)
        {
            if(a[i]>a[j])
            {
                m=1;
            }
            else
            {
                m=0;
                break;

            }

        }

        if(m)
        {
            t++;
            continue;
        }

        m=0;

        for(int j=i-1; j>=0; j--)
        {
            if(a[i]<a[j])
            {
                m=1;
            }
            else
            {
                m=0;
                break;

            }

        }

        if(m)
            t++;



    }

    cout<<t<<endl;



    return 0;
}
 
