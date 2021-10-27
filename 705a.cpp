
#include<bits/stdc++.h>



using namespace std;


int main()
{   int n;
   cin>>n;


  int i;
  for(i=1;i<=n;i++)
   {
        if(i>1 && i%2!=0)
        cout<<" that ";

       if(i%2)
       {
           cout<<"I hate ";

       }

       if(i%2==0)
        cout<<" that ";

       if(i%2==0)
        cout<<"I love ";

   }

   cout<<"it";

    return 0;
}
