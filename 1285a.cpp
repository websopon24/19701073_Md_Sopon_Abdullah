
#include<bits/stdc++.h>

using namespace std;

int o,p;


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='L') o++;

        else p++;
    }

    cout<<o+p+1;



return 0;   }
 
