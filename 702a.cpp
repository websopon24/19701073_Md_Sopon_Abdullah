#include<bits/stdc++.h>

using namespace std;

 int a[100000];

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin>>n;




    for(int i=0; i<n; i++)
    {
        cin>>a[i];
      }

    int p=1;
    int m=1;

  for(int i=1;i<n;i++)
  {
     while(a[i]>a[i-1])
     {
         p++;
         i++;
         if(i==n) break;
     }

     if(p>1) i--;

     m=max(p,m);
     p=1;

  }

      cout<<m<<endl;
    return 0;
}
 
