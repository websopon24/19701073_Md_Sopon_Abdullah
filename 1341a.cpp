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
        ll n,a,b,c,d,i;
        cin>>n>>a>>b>>c>>d;
        ll p=n*(a-b),q=n*(a+b),x=c-d,y=c+d;
        if(p<=x&&q>=x) cout<<"YES"<<endl;
        else if(p>=x&&q<=y) cout<<"YES"<<endl;
        else if(p<=y&&q>=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
             }






}

 
