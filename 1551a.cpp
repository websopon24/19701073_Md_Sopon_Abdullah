
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
        int c1,c2;
         c1=c2=n/3;
        if(n%3==1) c1++;
        else if(n%3==2) c2++;
        cout<<c1<<" "<<c2<<endl;
    }


}
