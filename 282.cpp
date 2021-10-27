
#include<bits/stdc++.h>



using namespace std;

int main()
{
    char str[4];
    int n,x=0 ;

    cin >> n;

    while(n--)
    {
       cin>>str;

       if(str[1] =='+')
       x++;

       else x--;


    }


  cout<<x<<endl;

    return 0;
}
