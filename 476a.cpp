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

   int n,m;

   cin>>n>>m;

   if(m>n) cout<<"-1"<<endl;

   else {

       cout<<m*ceil(n/(2.0*m))<<endl;
   }


}

 
