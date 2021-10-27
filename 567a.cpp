#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;
  int x[n];

  for(int i=0;i<n;i++) cin>>x[i];

  int i;
  cout<<abs(x[1]-x[0]) << " "<<abs(x[0]-x[n-1])<<endl;

  for( i=1;i<n-1;i++)
  {
      cout<<min(abs(x[i]-x[i-1]),abs(x[i]-x[i+1]))<<" "<<max(abs(x[i]-x[0]),abs(x[i]-x[n-1]))<<endl;


  }
cout<<abs(x[n-1]-x[i-1]) << " "<<abs(x[0]-x[n-1])<<endl;


return 0;   }
 
