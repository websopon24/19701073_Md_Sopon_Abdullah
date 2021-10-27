#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int tc;
    cin>>tc;

    while(tc--)

    {
        int n;

        cin>>n;
        int sum=0,a;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }

    int l= ceil(sum*1.0/n);
        cout<<l<<endl;


    }





    return 0;
}
 
