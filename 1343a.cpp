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

        int sum=1;

        int x=1;

        for(int i=1; ; i++)
        {

            sum+= 1<<i;
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }








    }

}

 
