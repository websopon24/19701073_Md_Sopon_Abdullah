#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int n,m;

    cin>>n>>m;

    for(int i=n+1; i<=m; i++)

    {
        int x=sqrt(i);
        int t=1;


            for(int j=2; j<=x+1; j++)
            {
                if(i%j==0) t=0;
            }




        if(t==1&& i==m)
        {
            cout<<"YES"<<endl;
            return 0;

        }

        else if(t==1)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }

    cout<<"NO"<<endl;

    return 0;
}
 
