
#include<bits/stdc++.h>

using namespace std;


int main()
{   char s[101] ;
    char t[101];
    char tm[101];



    cin >>s;
    cin >>t;

    int i,j,l;

    l = strlen(s);

    for(i=0,j=l-1;i<l;i++,j--)
    {
        tm[i] =s[j];




     //cout<<s[i]<<endl;
    }

    for(i=0;i<l;i++)
    {
         s[i] = tm[i];


    }



    if(strcmp(s,t)==0)

    cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;










    return 0;
}
