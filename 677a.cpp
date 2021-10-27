
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,h;
    cin>>n>>h;
    int i,j;

    int a[n];
    int c=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]<=h)
            c++;


        else
        {

            while(a[i]>h)
            {

                c+=2;

                a[i]/=2;
            }
        }



    }

    cout<<c<<endl;



}
