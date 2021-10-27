
#include<bits/stdc++.h>

using namespace std;


int main()
{
    char str[201];
   int i,j;
    cin>>str;
    char s[201];

    for(i=0,j=0; str[i]!='\0'; i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' )
        {
            if(i!=0 && str[i-1]!=' ' && j!=0)
            {

                s[j] =' ';
                j++;

            }
            i+=2;
            continue;
        }

        else
        {
            s[j]=str[i];

            j++;
        }


    }
     s[j]='\0';



  cout<<s<<endl;

    return 0;
}
