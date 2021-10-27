
#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int a[4];
    int t=0;
    for(int i=0; i<4; i++)
    {

        cin>>a[i];

        for(int j=i-1; j>=0; j--)
        {

            if(a[i]==a[j])
            {
                t++;
                break;
            }
        }
    }


    cout<<t<<endl;


}
