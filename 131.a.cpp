
#include<bits/stdc++.h>



using namespace std;


int main()
{
    int i,j,r = 0;

    char str[102];

    cin>>str;

    if(str[0]>='a' && str[0]<='z' || str[0]>='A' && str[0]<='Z')
            {
                r =1;
            }

            for(i=1; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            {

                r =1;
            }

            else
            {

                r =0;
                break;
            }

        }



   if(r==1)
   {
       for(i =0;str[i]!='\0';i++)
       {
           if(str[i]>='a' && str[i]<='z' )
            str[i]-=32;

           else
            str[i]+=32;

       }


   }


        cout<<str<<endl;

    return 0;
}
