#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);


    int n;

    cin>>n;

    int a,b;
    int m=0;

    for(int i=0; i<n; i++)
    {

        cin>>a>>b;
        if(a!=b)m=1;

    }

   printf(m==1?"Happy Alex" : "Poor Alex");
    //cout<<*p<<endl;

    return 0;
}
 
