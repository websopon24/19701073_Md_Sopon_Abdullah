
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

typedef long long ll;
const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();


     ll n,m;

     cin>>n>>m;

     ll a[m+1],sum=0;
     for(ll i=1;i<=m;i++) cin>>a[i];

     ll t=1;
     for(ll i=1;i<=m;i++)
     {
         if(t<=a[i])
         {
              sum+=a[i]-t;
              t=a[i];
         }

         else
          {
                sum+=n-t+a[i];
                t=a[i];
          }

     }


    cout<<sum<<endl;
return 0;
}

 
