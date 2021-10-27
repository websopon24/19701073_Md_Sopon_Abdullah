
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


               if( (n/2)%2) {
                cout<<"NO"<<endl;
                continue;
               }

               cout<<"YES"<<endl;

             int sum=0;
             for(int i=2;i<=n;i+=2)
             {
                   cout<<i<<" ";
                   sum+=i;

             }

             int sum1=0;

             for(int i=1;i<=n-3;i+=2)
             {
                  cout<<i<<" ";
                  sum1+=i;
             }


             cout<<sum-sum1<<endl;




             }




}

 
