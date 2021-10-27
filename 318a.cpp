
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,k;



   cin>>n>>k;



   cout<<(k<=((n+1)/2) ? (2*k-1) : (k-(n+1)/2)*2);




    return 0;
}
