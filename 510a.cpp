#include<bits/stdc++.h>




using namespace std;


int main()
{
    int n,m,a;

    cin>>n>>m;

    //int t=0;

     a=2;

    for(int r=1; r<=n; r++)
    {


        for(int c=1; c<=m; c++)
        {


            if(r%2 )
            {
                cout<< "#";


            }

            else if(c==m && r ==a)
            {

                 cout<< "#";
                 a+=4;

            }

            else if(c==1 && r!=a)
                  cout<< "#";





            else
                cout<< ".";
        }




        cout<<endl;
    }








    return 0;
}
 
