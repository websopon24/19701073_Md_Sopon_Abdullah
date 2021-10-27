
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[ ] = {4,7,47,74,44,77,444,447,474,744,777,774,747,477};

    for(i=0;i<14;i++)
    {

        if(n%a[i]==0)
        {

            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
