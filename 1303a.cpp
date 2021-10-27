#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    int tc;

    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;

        int n,l=0;

        int o=0,z=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                l=1;

            else if(s[i]=='0'&& l)
            {
                z++;
            }

        }

     //cout<<z<<endl;

        int t=s.size()-1;
         //cout<<s[t]<<endl;
        if(s[t]=='0' && z)
        {
            while(s[t]=='0')
            {
                 z--;
                 //cout<<z<<endl;
                 t--;
            }

        }

        cout<<z<<endl;



    }



    return 0;
}
 
