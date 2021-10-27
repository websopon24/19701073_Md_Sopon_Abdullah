#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c,x,y,ans=0;
	cin>>n>>a>>b>>c;
	for(x=0;x<n+1;x++){
		for(y=0;y<n+1;y++){
			int r=n-x*a-y*b;
			if(r>=0&&r%c==0){
				ans=max(ans,x+y+r/c);
			}
		}
	}
	cout<<ans;
}
