#include<bits/stdc++.h>

using namespace std;

char a[100][100];

int main()
{
    int m,n;
    cin>>n>>m;
    int t=0;

     for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>a[i][j];

              if(a[i][j]=='C' ||a[i][j]=='M'||a[i][j]=='Y')
                t=1;

          }

      }

    if(t==0)
        cout<<"#Black&White"<<endl;
    else
     cout<<"#Color"<<endl;



return 0;   }
