#include<bits/stdc++.h>

using namespace std;


int main()
{
  int a,b;
  cin>>a>>b;

  int c=0,x=0,h=a;
  while(a>=b)
  {
      x=a%b;

       a=a/b;
       h+=a;
       a=a+x;




  }



  cout<<h<<endl;


return 0;   }
