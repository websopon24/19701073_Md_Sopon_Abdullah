
#include<bits/stdc++.h>

using namespace std;

int a[26],t;

int main()
{
    char str[1005],str1[1000];


    scanf(" %[^\n]",str);

    int i,j,c=0;
    int l = strlen(str);
    //cout<<l;

    for(i=0,j=0; i<l-1; i++)
    {
        if(str[i]==',' || str[i]==' '|| str[i]=='{' || str[i]=='}')
            continue;

        else
        {
            str1[j] = str[i];
            j++;
            c++;

        }

    }

    str1[j] = '\0';

    //cout<<str1<<c<<endl;

    for(i=0; str1[i]!='\0'; i++)
    {
        a[str1[i]-'a']++;

    }


    for(i=0; i<26; i++)
    {
        if(a[i])
            t++;

    }


    cout<<t<<endl;



    return 0;
}
