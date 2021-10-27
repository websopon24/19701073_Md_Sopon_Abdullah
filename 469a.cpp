
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[n],i;

    for(i=0;i<n;i++)

    {

        a[i] = 0;
    }

    int p,x;
    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>x;

        a[x-1] = 1;
    }


    int q;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;

        a[x-1] = 1;
    }


    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<< "Oh, my keyboard!"<<endl;
            return 0;
        }


    }

    cout<< "I become the guy."<<endl;


    return 0;
}
