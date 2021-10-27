
#include<bits/stdc++.h>

using namespace std;

int c[4];
int main()
{
    int m,n;

    cin>>m;
    m++;

    while(1)
    {
        n=m;
        c[0] = n/1000;
        n%=1000;
        c[1]=n/100;
        n%=100;
        c[2]=n/10;

        c[3]=n%10;

        if(c[0]==c[1] || c[1]==c[2] ||c[2]==c[3]||c[3]==c[0] ||c[1]==c[3] ||c[0]==c[2])
        {
            m++;
            continue;

        }
        else
        {

            cout<<m<<endl;
            break;
        }


    }





    return 0;
}
