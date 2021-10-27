#include<bits/stdc++.h>

using namespace std;

int a[27];


int main()
{
  ios::sync_with_stdio(0);

  for(int i=1;i<=26;i++)
  {

      a[i]=i;
  }

   string s;

   cin>>s;

   int i=0;
   int sum=0;
   int x=1;
   while(s[i]!='\0')
   {
       int y= abs(a[s[i]-'a'+1]-x);
      sum += min (y,26-y);

      x=a[s[i]-'a'+1];

   i++;
   }


   cout<<sum<<endl;


return 0;   }
 
