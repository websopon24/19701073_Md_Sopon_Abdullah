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
    int t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int i=0,j=0;
        int k=n;

        while(k)
        { int m=k%10;
              k/=10;





                if(m!=0)
               j++;


        }

            cout<<j<<endl;

        while(n)
        { int m=n%10;
              n/=10;



             m*=pow(10,i);

                if(m!=0)cout<<m<<" ";
               i++;


        }
        cout<<endl;

    }

}
