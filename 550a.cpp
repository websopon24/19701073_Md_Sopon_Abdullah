
#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  string s;

  cin>>s;
  int t=0,k=0,l=1,p=0;

  for(int i=0;i<s.size()-1;i++)
  {
     if(s[i]=='A'&&s[i+1]=='B' && l)
     {  i++;
        t=1;
        p=1;
        l=0;
        continue;
     }

     else if(s[i]=='B'&&s[i+1]=='A' && p)
     {  i++;
       k=1;
     }

     if(t&&k)
     {
         cout<< "YES"<<endl;
         return 0;
     }
  }

   t=0,k=0,l=1,p=0;

  for(int i=0;i<s.size()-1;i++)
  {
     if(s[i]=='B'&&s[i+1]=='A' && l)
     {  i++;
        t=1;
        p=1;
        l=0;
        continue;
     }

     else if(s[i]=='A'&&s[i+1]=='B' && p)
     {  i++;
       k=1;
     }

     if(t&&k)
     {
         cout<< "YES"<<endl;
         return 0;
     }
  }



  cout<< "NO"<<endl;


return 0;   }
 
