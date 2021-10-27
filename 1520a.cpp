
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
        char a[51];
        cin>>a;
        int c=0;
        //cout<<a<<endl;
        for (int i=0; i<n ; i++ )

        {
            if(a[i]!=a[i+1] && i<n-1)

            {

                for (int j=i+1; j<n ; j++)
                {
                    if(a[i]==a[j])
                    {
                        c++;
                        break;
                    }
                }
            }

            if(c) {
                cout<<"NO"<<endl;
                break;
            }

        }

       if(!c) {
                cout<<"YES"<<endl;

            }
    }

}
