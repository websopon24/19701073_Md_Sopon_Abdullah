#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);


  string s;

  cin>>s;

  int i=0;

    while(i<s.size())
    {
         if(s[i]=='1' && s[i+1]=='4'&&s[i+2]=='4')
        {
            i=i+3;
            continue;
        }

        else if(s[i]=='1' && s[i+1]=='4')
        {
            i=i+2;
            continue;
        }

        if(s[i]=='1')
        {
            i++;
            continue;
        }



        else {
            cout<<"NO"<<endl;
            return 0;
        }



    }


      cout<<"YES"<<endl;




return 0;   }
 
