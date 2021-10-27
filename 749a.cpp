
#include<bits/stdc++.h>

using namespace std;


int main()
{
    //int t;
   // cin>>t;
    int a;
  //while(t--)

      cin>>a;

      if(a%2==0)
      { a/=2;
          cout<<a <<endl;

          while(a)
          {
              cout<<2<<" ";
              a--;
          }
          cout<<endl;
      }

      if(a%2!=0)
      { a/=2;

          cout<<a <<endl;
        a--;
          while(a)
          {
              cout<<2<<" ";
              a--;
          }

      cout<<3<<endl;

  }



return 0;   }
