
#include<bits/stdc++.h>




using namespace std;


int main()
{

    int n;

    cin>>n;

    long long int a[n];

    //int b[n]= {0};

    for(int i=0; i<n; i++)

        cin>>a[i];


    for(int i=0; i<n; i++)

    {
        if(a[i]<=3)
        {

           cout<< "NO"<<endl;
           continue;
        }


        double l=sqrt(a[i]);



        if(ceil(l)!=floor(l))

        {
            cout<< "NO"<<endl;

            continue;

        }

       int m =  l;
       if(m==2)

        {
            cout<< "YES"<<endl;

            continue;

        }

       if(m%2==0)

        {
            cout<< "NO"<<endl;

            continue;

        }

        int limt = sqrt(l)+1;
         int c=1;
        for(int j=3;j<=limt;j+=2)
        {
            if(m%j==0)
            {
                cout<< "NO"<<endl;
               c=0;
               break;
            }

        }
        if(c==1)
            cout<< "YES"<<endl;



    }



    return 0;
}

 
