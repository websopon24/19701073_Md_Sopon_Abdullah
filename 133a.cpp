
#include<bits/stdc++.h>


using namespace std;

int main()
{

    int i,j;

    char str[104] ;

    cin>>str;

    i=0;

    while(str[i]!='\0')
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            cout<< "YES"<<endl;
            return 0;


        }

        i++;
    }





    cout<<"NO"<<endl;



    return 0;
}
