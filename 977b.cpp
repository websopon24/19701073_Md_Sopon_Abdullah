#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

   int n;


     cin>>n;

     string s;

     cin>>s;

     char x,y;

       int l,m=0;

      for(int i=0;i<n-1;i++)
       {
            l=0;
           for(int j=0;j<n-1;j++)
           { if(s[i]==s[j]&& s[i+1]==s[j+1])l++;


           }

           if(l>m)
           {
               m=l;
             x=s[i];
             y=s[i+1] ;
           }
       }


    cout<<x<<y<<endl;



return 0;   }
 
