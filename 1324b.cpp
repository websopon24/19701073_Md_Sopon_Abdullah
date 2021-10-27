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




        int n;

        cin>>n;

        int a[n];


        for(int i=0; i<n; i++)
            cin>>a[i];

        int t=1;

        for(int i=0; i<n-2; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    cout<<"YES"<<endl, t=0;
                    break;
                }

            }
            if(!t) break;
        }

        if(t) cout<<"NO"<<endl;





    }


}

 
