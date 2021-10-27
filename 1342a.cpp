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

    int tc;

    cin>>tc;

    while(tc--)
    {

        ll x,y,a,b;

        cin>>x>>y>>a>>b;


        ll sum=0;

        if(x!=y)
        {
            sum+=(max(x,y)-min(x,y))*a;

        }


        ll k=min(x,y);
     if(k==0) cout<<sum<<endl;

      else cout<< min(sum+k*2*a,sum+k*b)<<endl;









    }


}

 
