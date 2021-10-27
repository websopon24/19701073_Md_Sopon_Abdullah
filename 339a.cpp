
#include<bits/stdc++.h>




using namespace std ;


int main()
{
    char str[110];

    cin>>str;

    int n1=0,n2=0,n3=0,i,j;

    if(strlen(str)==1)
    {
        cout<<str<<endl;
        return 0;
    }



    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='1')
        {
            n1++;
        }
        else if(str[i]=='2')
        {
            n2++;
        }
        else if(str[i]=='3')
        {
            n3++;
        }
        else
            continue;

    }

    int x=0;

    for(i=1; i<=n1; i++)
    {
        cout<<"1";
        x++;

        if(i<n1)
        {
            cout<<"+";
            x++;

        }



    }

    if(x==strlen(str))
        return 0;



    for(i=1; i<=n2; i++)
    {
        if(n1)
        {
            cout<<"+";
            n1 =0;
        }

        cout<<"2";
        if(i<n2)
            cout<<"+";
    }
    if(n2==0 && n1 !=0)
        cout<<"+";



    for(i=1; i<=n3; i++)
    {

        if(n2)
        {
            cout<<"+";
            n2=0;

        }

        cout<<"3";

        if(i<n3)
        {
            cout<<"+";

        }
    }


    cout<<endl;



    return 0;
}
