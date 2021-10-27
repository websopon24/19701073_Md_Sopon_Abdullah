
#include<bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cin>>n;
    int s;
    int i;

  int c=0;
  int m[5]= {0};


    for( i=0; i<n; i++)
    {
        cin>>s;
        m[s]++;

    }

    c = m[4]+m[3]+m[2]/2;

    m[1] -=m[3];
    if(m[2]%2)
    {
        c++;
        m[1]-=2;
    }

    if(m[1]>0)
    {
        c+=(m[1]+3)/4;
    }





   cout<<c<<endl;







    return 0;
}
