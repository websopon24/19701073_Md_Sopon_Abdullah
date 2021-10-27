#include<stdio.h>
#include<string.h>
 
 
 
int main()
{
    char str[110];
    int n,l;
 
 
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
 
        l = strlen(str);
 
        if(l<=10)
            printf("%s\n",str);
 
        else
        {
 
 
 
            printf("%c%d%c\n",str[0],l-2,str[l-1]);
        }
 
 
    }
 
 
 
 
 
 
 
 
    return 0;
}