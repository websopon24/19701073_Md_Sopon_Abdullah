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


    string s;

    cin>>s;

    int l=s.size();


    for(int i=0; i<l; i++)
    {

        if(s[i]=='-' &&s[i+1]=='.')
        {
            cout<<"1";
            i++;
        }

        else  if(s[i]=='-' &&s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }

        else cout<<"0";

    }

    cout<<endl;


}

 
