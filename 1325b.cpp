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

              map<int,int>m;

              int a,t=0;

              for(int i=0;i<n;i++)
              {
                  cin>>a;
                  m[a]++;
                  if(m[a]==1) t++;
              }



             cout<<t<<endl;


             }




}

 
