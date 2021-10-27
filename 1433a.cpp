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

    int t,x;
    cin>>t;
    while(t--)
    {

        cin>>x;
        int n=x%10;
        int sum=10*(n-1);
        int c=0;
        while(x)
        {
            x=x/10;
            c++;

        }
        cout<<sum+c*(c+1)/2<<endl;

    }


}
