
#include<bits/stdc++.h>




using namespace std;


int main()
{
    char str[104];

    cin>>str;
    int l;
    l = strlen(str);
    int j,x,i =0;
    while(str[i]!='\0')
    {

        if(str[i] == '1')
        {
            x =1;

            for(j=i+1; str[j]!='\0'; j++)
            {
                if(str[j]=='1')
                {
                    x=x+1;

                    if(x >= 7)

                    {
                        cout<<"YES"<<endl;
                        return 0;

                    }

                    //cout<<x<<endl;

                    continue;
                }



                else if(str[j]=='0')
                {
                    i = j;
                    //cout<<i<<endl;

                    if(l-i+1<7)
                    {
                         cout<<"NO"<<endl;
                         return 0;
                    }
                    break;
                }

            }
        }


        else
        {
            x = 1;
            for(j=i+1; str[j]!='\0'; j++)
            {
                if(str[j]=='0')
                {
                    x=x+1;

                    if(x >= 7)

                    {
                        cout<<"YES"<<endl;
                        return 0;

                    }

                    //cout<<x<<endl;

                    continue;
                }



                else
                {
                    i = j;
                    if(l-i+1<7)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }

                    break;
                }

            }
        }




    }






    return 0;
}
