
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;

    cin>>n;

    int a[n],b[n];

    int i=0,c=0;

    while(i<n)
    {

        cin>>a[i]>>b[i];
        i++;
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j]) c++;

        }
    }

    cout<<c<<endl;



    return 0;
}
