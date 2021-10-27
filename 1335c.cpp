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

               int a[n],l=1,d=0;

               map<int,int>m;

               for(int i=0;i<n;i++)
               {
                   cin>>a[i];
                   m[a[i]]++;
                   if(m[a[i]]==1) d++;
                   else if(m[a[i]]>l)
                   {
                       l=m[a[i]];

                   }
               }


             if(n==1) cout<<"0"<<endl;

            else if(d==n) cout<<"1"<<endl;

            else cout<<max(min(d,l-1),min(d-1,l))<<endl;

           // else if(d==l)

             //else if(d>l) cout<<l+1<<endl;
             //else
                //cout<<d<<endl;








             }




}

 
