#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,r;
    cin>>n>>r;
    int c=0;
    int i=1;
    int sum=240;
    while(i<=n)
    {
         sum=sum-5*i;

        if(sum>=r)
        {
             c++ ;
        }

         i++;

        //if(sum-5*i<r)
            //break;


    }

    cout<<c<<endl;



return 0;   }
