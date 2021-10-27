
#include<bits/stdc++.h>



using namespace std;

int main()
{
   char s[105];
   char s2[105];

    cin>>s;
    cin>>s2;

   strlwr(s);
   strlwr(s2);

  int l;
  l = strcmp(s,s2);
   cout<<l<<endl;






    return 0;
}
