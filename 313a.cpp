#include<bits/stdc++.h>

using namespace std;


int main()
{
  int n;
  cin>>n;
  int m=n;
  if(n<0)
  {

  int r=abs(n%10);
  n/=10;
  //cout<<n<<endl;

  //cout<<r<<endl;


   m/=100;

  m=m*10-r;
   //cout<<m<<endl;


  cout<<max(m,n)<<endl; }

  else
  {
      cout<<n<<endl;
  }





return 0;   }
