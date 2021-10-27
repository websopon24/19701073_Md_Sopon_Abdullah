#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,mi=0,ci=0;
    cin>>n;
    int m,c;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
        {
            mi++;

        }

    else if(m<c)
        {
            ci++;

        }



    }

    if(mi>ci) cout<<"Mishka"<<endl;

    else if(mi<ci) cout<< "Chris"<<endl;

   else cout<< "Friendship is magic!^^"<<endl;



return 0;   }
return 0;   }
