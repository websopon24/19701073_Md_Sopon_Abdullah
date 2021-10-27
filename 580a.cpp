
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
     cin>>n;

    int a[n];
   for(int i=0;i<n;i++)  cin>>a[i];
   int m=1;
   int sum=1;

   for(int i=1;i<n;i++)
   {
       if(a[i-1]<= a[i])
       {
           sum++;
           if(m<sum)
             m=sum;
       }

      else
      {
         sum=1;
      }


   }

  cout<<m<<endl;


return 0;   }
