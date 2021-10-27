
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


     int n,t;

     cin>>n>>t;

     int a[n];

     for(int i=1;i<=n-1;i++)
     {
         cin>>a[i];
     }


     for(int i=1;i<=t;i=i+a[i])
     {

         if(t==i)
         {
             cout<<"YES"<<endl;
             return 0;
         }
     }


    cout<<"NO"<<endl;
             return 0;


}

 
