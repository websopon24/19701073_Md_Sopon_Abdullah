
#include<bits/stdc++.h>




using namespace std;

int c;

int main()
{

    int n;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
      char s[25];

        cin>>s;



         if(strcmp(s,"Tetrahedron")==0)
            c+=4;

        else if(strcmp(s,"Cube")==0)
            c+=6;

        else if(strcmp(s,"Octahedron")==0)
            c+=8;

       else if(strcmp(s,"Dodecahedron")==0)
            c+=12;

        else
            c+=20;


    }


   cout<<c<<endl;



}
