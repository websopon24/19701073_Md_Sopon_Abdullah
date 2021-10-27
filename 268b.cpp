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
      int m=n;

      ll sum=0;

        for(int i=n;i>=1;i--)
        {
            m--;
            sum+=i;
               int l=m-1;
            sum+=(l*(l+1))/2;
        }

       cout<<sum<<endl;

}

 
