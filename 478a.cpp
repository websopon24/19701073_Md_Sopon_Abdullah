#include<bits/stdc++.h>

using namespace std;

int sum;

int main()
{
    ios::sync_with_stdio(0);

    int a;

    for(int i=0; i<5; i++)

    {
        cin>>a;
        sum+=a;
    }


  if(sum%5==0 && sum!=0) cout<<sum/5<<endl;

   else cout<<"-1"<<endl;



    return 0;
}
 
