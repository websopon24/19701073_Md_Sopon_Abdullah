
#include<bits/stdc++.h>



using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    double T =0;
    int t=0;


    while(T<=1)
    {
        t++;
        T = (a*pow(3,t))/(b*pow(2,t));

    }

    cout<<t<<endl;



    return 0;
}
