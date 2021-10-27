#include<bits/stdc++.h>

using namespace std;

int a[]={6,8,4,2};

int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;

  if(n==0)
  {
      cout<<"1"<<endl;
      return 0;
  }

  cout<<a[n%4]<<endl;


return 0;   }
 
