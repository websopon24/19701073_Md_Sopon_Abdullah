
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();


   ll n;

    cin>>n;
    ll x[n];

    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }

      sort(x,x+n);

      ll q;
      cin>>q;

      for(ll i=0;i<q;i++)
      {
          ll a;
          cin>>a;


          cout<<upper_bound(x,x+n,a)-x<<endl;

      }





}

 
