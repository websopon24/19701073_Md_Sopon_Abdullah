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

              int a;

             int t1=0,t2=0;

             for(int i=0;i<n;i++)
             {
                 cin>>a;
                 if(a%2) t1++;

                 else t2++;

             }



             if(t1==n ||t2==n) cout<<"YES"<<endl;

             else cout<<"NO"<<endl;



             }





}

 
