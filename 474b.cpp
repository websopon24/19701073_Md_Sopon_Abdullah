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


    int n;

    cin>>n;

    int a[n];
    int sum[n],s=0;

    for(int i=0; i<n; i++)
    {

        cin>>a[i];
        s+=a[i];
        sum[i]=s;
        //cout<<sum[i]<<endl;
    }

    int q,x;
    cin>>q;

    while(q--)
    {
        cin>>x;
       cout<<lower_bound(sum,sum+n,x)-sum+1<<endl;

        }
    }








 
