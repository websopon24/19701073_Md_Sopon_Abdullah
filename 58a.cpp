
#include<bits/stdc++.h>



using namespace std;



int main()
{
    char str[101];

    char str1[] = "hello";


    int i,j;

    int sum = 0 ;

    cin>>str;

    for(i=0,j=0;str[i] !='\0';i++)
    {
        if(str1[j]==str[i])
        {

            sum++;
            if(sum==5)
            {
                cout<<"YES"<<endl;
                return 0;
            }

            j++;
        }


    }



    cout<<"NO"<<endl;





    return 0;
}
