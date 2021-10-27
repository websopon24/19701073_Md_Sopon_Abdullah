
#include<bits/stdc++.h>


using namespace std;


int main()
{  short a,b,c,r[6];


    cin>>a>>b>>c;

    r[0] = a*b+c;

    r[1] = a+b*c;

    r[2] = a+b+c;

    r[3] = a*b*c;

    r[4] = a*(b+c);

    r[5] = (a+b)*c;

    int m=-6667;

    int i;
    for(i=0;i<6;i++)
  {
      if(m<r[i])
      {
          m=r[i];
      }




  }


    cout<<m<<endl;


    return 0;
}
