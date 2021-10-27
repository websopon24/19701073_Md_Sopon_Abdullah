
#include<bits/stdc++.h>

using namespace std;


int main()
{
  int n;
  cin>>n;
  int a[n];
   int s=0;
  for(int i=0;i<n;i++)
  {
       cin>>a[i];
       s+=a[i];

  }

    s=s/2;
    int c=0;


     sort(a,a+n);
     int i=n-1;
     int sum=0;
     while(1)
     {
         if(sum>s)
         {
             cout<<c<<endl;
             break;
         }

         c++;
         sum+=a[i];
         i--;

     }







return 0;   }
