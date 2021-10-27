
#include<bits/stdc++.h>




using namespace std;


int main()
{

    int n;

    cin>>n;

    int a,b, m=-1;

    int sum=0;

    while(n--)
    {
        cin>>a>>b;

        sum+=b-a;
        if(sum>m)
        {
            m = sum;
        }


    }

   cout<<m<<endl;




    return 0;
}
