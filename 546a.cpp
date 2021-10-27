#include<bits/stdc++.h>


using namespace std;

int main()
{
    int k,n,w,b;

    cin>>k>>n>>w;

    b = ((w*(w+1))/2)*k - n;

    if(b>0)
        cout<<b<<endl;

    else
        cout<< "0"<<endl;










    return 0;
}
