
#include<bits/stdc++.h>



using namespace std;


int main()
{
    int n;
    cin>>n;

    char str[52];
    cin>>str;


    int sum=0,i=0;


    for(i=1;i<n;i++)
    {
        if(str[i] == str[i-1])
            sum++;


    }
    cout<<sum<<endl;




    return 0;
}
