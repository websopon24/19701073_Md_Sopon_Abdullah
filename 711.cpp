#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int s=1;
    char a[n][6];
     for(int i=0;i<n;i++)
      { int j;
          for( j=0;j<5;j++)
          {
             cin>>a[i][j];

          }
          a[i][j]='\0';

          if(a[i][j-5]=='O'&&a[i][j-4]=='O' && s==1)
          {
              a[i][j-5]='+';
             a[i][j-4]='+';



             s=0;

          }


            else if(a[i][j-2]=='O'&&a[i][j-1]=='O' && s==1)
            {

              a[i][j-1]='+';
             a[i][j-2]='+';
            s=0;
            }


      }


      if(s)
        cout<<"NO"<<endl;

      else
      {  cout<<"YES"<<endl;

          for(int i=0;i<n;i++)
            cout<<a[i]<<endl;
      }








return 0;   }
