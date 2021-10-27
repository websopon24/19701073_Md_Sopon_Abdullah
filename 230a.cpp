
#include<bits/stdc++.h>
#include<stdio.h>




using namespace std;


int main()
{

    int s,n,i;
    cin>>s>>n;

    int x[n],y[n];

    int c=0,d=0;
    i=0;

    while(i<n)
    {
        cin>>x[i]>>y[i];
        i++;
    }

    //cout<<s<<n;

    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(x[i]>x[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }

    }

    i=0;
    while(i<n)
    {
        if(s<=x[i])
        {

            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            s+=y[i];
        }
        i++;
    }

    cout<<"YES"<<endl;
    return 0;


    } 
