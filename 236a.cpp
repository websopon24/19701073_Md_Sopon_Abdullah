
#include<bits/stdc++.h>




using namespace std;

int c[26];

int main()
{

  string s;

  cin>>s;



  for(int i=0;i<s.size();i++)
  {
      c[s[i]-'a']++;

  }
  int sum=0;
  for(int i=0;i<26;i++)
  {

      if(c[i])
      {

          sum++;
      }
  }


  if(sum%2)
   cout<< "IGNORE HIM!"<<endl;

 else
        cout<<"CHAT WITH HER!"<<endl;


}
