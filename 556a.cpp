#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    char c[n];
    cin>>c;
    int t1=0,t=0;
    for(int i=0; i<n; i++)
    {

        if(c[i]=='1')
            t1++;
        else
            t++;

    }



    cout<<abs(t1-t)<<endl;




    return 0;
}
