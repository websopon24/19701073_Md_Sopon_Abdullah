#include<bits/stdc++.h>

using namespace std;

int sum[2];


int main()
{
  ios::sync_with_stdio(0);

  int n;
  cin>>n;

  int a[1001];

  for(int i=1;i<=n;i++) cin>>a[i];
  int j;

  int m=1;
    j=0;

int i=1;

  while(1)
  {
      if(a[i]<a[n])
      {
          sum[j]+= a[n--] ;

        swap(m,j);

          if(i>n)
            break;
      }

      else
      {  sum[j]+=a[i++];

            swap(m,j);
           if(i>n)
            break;
      }

  }


  cout<<sum[0]<<" "<<sum[1]<<endl;


return 0;   }
 
