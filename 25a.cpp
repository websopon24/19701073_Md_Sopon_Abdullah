
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;

    cin>>n;

    int a[n],i,o=0,e=0;

    for(i=0; i<n; i++)
    {

        cin>>a[i];

        if(a[i]%2)
        {
            o++;
        }

        else
            e++;
    }


    if(e>o)
    {
        for(i=0; i<n; i++)
        {

            if(a[i]%2)
            {
                cout<<(i+1)<<endl;
                break;
            }
        }

        return 0;
    }




    for(i=0; i<n; i++)
    {

        if(a[i]%2==0)
        {
            cout<<(i+1)<<endl;
            break;
        }
    }







    return 0;
}
