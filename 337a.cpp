
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
    int n,m;
    cin>>n>>m;

    int j[m];
    for (int i=0;i<m ;i++ ) cin>>j[i];
        ;
    sort(j,j+m);
    cout<<j[0]<<endl;


}