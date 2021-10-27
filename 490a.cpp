#include<bits/stdc++.h>

using namespace std;

int c[4];
int main()
{
  ios::sync_with_stdio(0);

  int t[5001];
  int n;

  cin>>n;

  for(int i=1;i<=n;i++)
  {
      cin>>t[i];

      c[t[i]]++;


  }

  int m=min(c[1],min(c[2],c[3]));
  cout<<m<<endl;

  int s=1;
  m=3*m;
 while(m--)
 {
     for(int i=1;i<=n;i++)
     {
        if(s==t[i])
        {
            cout<<i<<" ";
            t[i]=0;
            s++;
            break;
        }

     }

    if(s>3)
    {
        cout<<endl;
        s=1;
    }
 }



return 0;   }
 
