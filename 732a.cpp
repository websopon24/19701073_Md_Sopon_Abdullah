#include<bits/stdc++.h>

using namespace std;


int main()
{
    int r,n;

   cin>>n>>r;
    int sum=n;
   int c=1;
   while(1)
   {
         //cout<<sum<<endl;

      if(sum%10==0 || sum%10==r )
      {
        cout<<c<<endl;
        //cout<<sum<<endl;

         break;
      }


      sum+=n;
      c++;

   }




return 0;   }
