
#include<bits/stdc++.h>


using namespace std;


int main()
{
    int n;

    cin>>n;
    char str[n+1];
    cin>>str;

    int a=0,d=0,i;

    for(i=0;i<n;i++)
    {
        //cout<<"Danik"<<endl;

        if(str[i]=='A')
            a++;


        else
            d++;



    }


    if(a>d)
        cout<<"Anton"<<endl;

    else if(d>a)
        cout<<"Danik"<<endl;

    else
        cout<<"Friendship"<<endl;


}
