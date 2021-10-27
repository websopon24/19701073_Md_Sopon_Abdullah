
#include<stdio.h>

#include<string.h>


int main()
{
    int l;
    char str[111];
    char c;


    scanf("%s",str);
    strlwr(str);
    l = strlen(str);


    for(int i =0; i<l; i++)
    {

        if(str[i]>='A' && str[i]<='Z')
            c = c+32;

        else if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='y');



        else
            printf(".%c",str[i]);


    }














    return 0;
}
