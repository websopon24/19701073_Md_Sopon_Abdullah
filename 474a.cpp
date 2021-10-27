#include<bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);
  char str[]="qwertyuiopasdfghjkl;zxcvbnm,./";
  char st[101];
  char ch;
  cin>>ch;
  cin>>st;


  if(ch=='R')
  { //cout<<"R"<<endl;

     for(int i=0;st[i]!='\0';i++)
    {

     for(int j=0;str[j]!='\0';j++)
    {
         if(st[i]==str[j])
         {  //cout<<"\""<<st[j]<<str[i]<<"\"";
             cout<<str[j-1];
             break;
         }

     }


     }
  }



  if(ch=='L')
  {

     for(int i=0;st[i]!='\0';i++)
    {

     for(int j=0;str[j]!='\0';j++)
    {
         if(st[i]==str[j])
         {
             cout<<str[j+1];
             break;
         }

     }

     }
  }


  cout<<endl;


return 0;   }
 
