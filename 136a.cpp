
#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);

  int n;

  cin>>n;

  int a[n+1];

  for(int i=1;i<n+1;i++)
  {

      cin>>a[i];
  }

   for(int i=1;i<n+1;i++)
    {
        int x =i;
        for(int j=1;j<n+1;j++)
        {
            if(a[j]==x)
            {
                cout<<j<<" ";
                break;
            }

        }
    }

     cout<<endl; 
}
