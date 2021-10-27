#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n,k,m=0,t=0;
    cin>>n>>k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        int p = 5-a[i];

        if(p>=k)

        {
            m++;
            if(m==3)

            {
                t++;
                m=0;

            }

        }


    }


     cout<<t<<endl;



    return 0;
}
 
