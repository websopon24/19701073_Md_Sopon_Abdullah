#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n;

    cin>>n>>t;

    char m[n+1];

    int p=1;
    int r=t;


    int i;
    for( i=0; i<n; i++)
    {
        if(t==10 || p==0)
        {
            if(t==10)
            {
                t=1;
                p=0;
            }

            else
                t=0;

        }
        m[i]=t+'0';


    }

    m[i]='\0';

    if(n==1 && r==10 )
    {
        cout<<"-1"<<endl;
    }

    else

    {
        cout<<m;
    }








    return 0;
}
