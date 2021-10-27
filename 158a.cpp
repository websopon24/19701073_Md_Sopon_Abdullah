#include<bits/stdc++.h>
 
 
 
 
using namespace std;
 
 
 
int main()
{
   int n,k,q;
 
   cin>>n>>k;
 
   int a[n+1];
 
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
 
 
 
   }
 
 
   int sum =0;
 
   for(int i=1;i<=n;i++)
   {
       if(a[i]>=a[k] && a[i])
       {
           sum++;
       }
 
   }
 
    cout<<sum<<endl;
 
 
 
    return 0;
}