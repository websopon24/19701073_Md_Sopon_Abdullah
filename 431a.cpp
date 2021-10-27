
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


    ll a[5];

     ll sum=0;

    for(int i=1;i<5;i++) cin>>a[i];

    string s;
    cin>>s;

     for(int i=0;i<s.size();i++)
     {
            if(s[i] =='1') sum+=a[1];
          else if(s[i] =='2') sum+=a[2];
            else if(s[i] =='3') sum+=a[3];
              else sum+=a[4];
     }


     cout<<sum<<endl;





}

 
