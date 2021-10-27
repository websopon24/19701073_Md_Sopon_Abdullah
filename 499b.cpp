
#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n,m;
  cin>>n>>m;

  string a[m];
  string b[m];
  string l[n];

  for(int i=0;i<m;i++)
  {
      cin>>a[i]>>b[i];

  }
  for(int i=0;i<n;i++) cin>>l[i];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(l[i]==a[j])
          {
              if(a[j].size()>b[j].size())
              {  cout<<b[j]<<" ";
                break;

              }

              else
              {
                   cout<<a[j]<<" ";
                   break;
              }

          }
      }

  }



return 0;   }
 
