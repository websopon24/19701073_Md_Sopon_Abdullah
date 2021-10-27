#include<bits/stdc++.h>
using namespace std;

long long a,b,A[100005];
int main()
{
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		A[b]+=b;
	}
	A[0]=0;
	for(int i=2;i<=100000;i++)
	{
		A[i]=max(A[i-1],A[i-2]+A[i]);
	}
	cout<<A[100000]<<endl;
}
