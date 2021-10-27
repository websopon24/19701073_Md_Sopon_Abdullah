#include<bits/stdc++.h>

using namespace std;

int cmp(int a,int b)
{

    return a>b ;
}

int main()
{
  ios::sync_with_stdio(0);

  int k;
  cin>>k;
  int a[12];

  for(int i=0;i<12;i++) cin>>a[i];

  if(k==0)
  {

    cout<<"0"<<endl;
    return 0;
  }

  sort(a,a+12,cmp);

  int sum=0;
  for(int i=0;i<12;i++)
  {
     sum+=a[i] ;

     if(sum>=k)
     {
         cout<<i+1<<endl;
         return 0;
     }

  }
    cout<<"-1"<<endl;


return 0;   }
 
