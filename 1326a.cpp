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
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }

        cout<<"2";

        n-=2;

        if(n>0)
        while(n--)
        {
            cout<<"3";
        }

        cout<<"9"<<endl;
    }





    return 0;
}
 
