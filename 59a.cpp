
#include<bits/stdc++.h>


using namespace std;

int main()
{
    char str[101];
    cin>> str;

    int i,c=0,l=0;

    for(i=0; str[i]!=NULL; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            c++;
        }

        if(str[i]>='A' && str[i]<='Z')
        {
            l++;
        }
    }

    if(l>c)
    {
        strupr(str);

        cout<<str<<endl;
    }


    else
    {
        strlwr(str);

        cout<<str<<endl;

    }

    return 0;
}
