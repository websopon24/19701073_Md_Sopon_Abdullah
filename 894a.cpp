#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);



    string s;

    cin>>s;

    int i=0;
    int c=0;

    while(i<s.size())
    {

        if(s[i]=='Q')
        {
            int j=i+1;
            while(j<s.size())
            {


                if(s[j]=='A')
                {
                    int k=j+1;

                    while(k<s.size())
                    {
                        if(s[k]=='Q')
                            c++;
                             k++;


                    }
                }


               j++;
            }


        }

        i++;
    }


   cout<<c<<endl;

    return 0;
}
 
