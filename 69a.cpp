
#include<bits/stdc++.h>



using namespace std;


int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int i;


    int sum1,sum2,sum3;

    sum1=0;
    sum2=0;
    sum3=0;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;


        sum1 = sum1+a;
        sum2 = sum2+b;
        sum3 = sum3+c;



    }

   //cout<<sum1<<endl<<sum2<<endl<<sum3<<endl;

   if(sum1==0 && sum2==0 && sum3==0)
    cout<<"YES"<<endl;

   else
    cout<<"NO"<<endl;

}
