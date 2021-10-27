
#include<bits/stdc++.h>




using namespace std;


int main()
{


  int a[6][6],sum=0;

   for(int i=1;i<6;i++)
   {

       for(int j=1;j<6;j++)
       {
          cin>>a[i][j] ;

          if(a[i][j])
          {
            sum = abs(3-i)+abs(3-j);
          }

       }
   }


    cout<<sum<<endl;





    return 0;
}
