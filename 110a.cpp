
#include<bits/stdc++.h>




using namespace std;

int c[10];

int main()
{

    string n;
    cin>>n;

 int c=0;

    for(int i=0;n[i]!='\0';i++)
    {

       if(n[i]=='4' || n[i]=='7')
       {
           c++;
       }


    }

   if(c==4 || c==7)
    cout<< "YES"<<endl;

   else
     cout<< "NO"<<endl;










}
