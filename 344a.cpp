
#include<bits/stdc++.h>



using namespace std;


int main()
{   int n;
    cin>>n;
    int ara[n];
    int i;

    for(i=0;i<n;i++)

    {
        cin>>ara[i];

    }

    int g=1;

    //if(ara[0]==10)
        //g++;


    for(i=1;i<n;i++)

    {
        if(ara[i] != ara[i-1])
        {
            g++;
        }

    }

   cout<<g<<endl;













    return 0;
}
