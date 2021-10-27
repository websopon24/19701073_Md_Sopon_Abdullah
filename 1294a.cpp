#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int tc;
    cin>>tc;


    while(tc--)

    {
        int sum=0;
        int a[4];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
            sum+=a[i] ;
        }
        int n;
        cin>>n;
        sum+=n;

        sort(a,a+3);
        if(sum%3==0 && sum/3>=a[2])

            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
