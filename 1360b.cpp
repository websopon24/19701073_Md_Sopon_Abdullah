
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
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int s[51];
        for(int i=0;i<n;i++) cin>>s[i];
        sort(s,s+n);
        int mi= s[1]-s[0];
         for(int i=1;i<n-1;i++)
               mi=min(mi,s[i+1]-s[i]);

         cout<<mi<<endl;

    }

}
