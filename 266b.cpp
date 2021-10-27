#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,t;
    cin>>n>>t;

    char s[51];

    cin>>s;

    while(t--)
    {

        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                char tm =s[i];
                 s[i] = s[i+1];
                 s[i+1]=tm;

                 i++;
            }

        }
    }

  cout<<s<<endl;






return 0;   }
