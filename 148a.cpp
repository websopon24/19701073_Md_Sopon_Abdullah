
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
   ll k,l,m,n,d,total=0;
     cin>>k>>l>>m>>n>>d;
	for(int i=1;i<=d;i++){
		if( i%k==0 || i%l==0 || i%m==0 || i%n==0 )
			total++;
	}
	cout<<total;


}
