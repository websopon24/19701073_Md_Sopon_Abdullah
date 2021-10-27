#include<stdio.h>
 
 
int main()
{
    int n;
 
    int a,b,c;
    int s=0;
 
    scanf("%d",&n);
 
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
 
        if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1)  )
 
             {
 
                 s = s+1;  }
 
 
 
 
 
 
    }
 
    printf("%d\n",s);
 
 
    return 0;
}