#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;

  cin>>n;

  string s;
  cin>>s;
  if(s.find("xxx")==-1) cout<<"0"<<endl;

  else
  {
     int c=0,i=0;



     while(i<n-2)
     {

        if(s[i]=='x' &&s[i+1]=='x'&&s[i+2]=='x')
        {
            c++;
        }
        i++;
     }

      cout<<c<<endl;
  }






return 0;   }
 
