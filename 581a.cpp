#include<bits/stdc++.h>

using namespace std;


int main()
{

  int a,b;
  cin>>a>>b;
  int c= a>b? b : a;

  int d= a>b? a-c : b-c;

  cout<<c<<" "<<d/2<<endl;





return 0;   }
