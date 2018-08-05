#include<bits/stdc++.h>
using namespace std;
int main(){
long long int l,r,x,y,k;
bool fuck=false;
cin>>l>>r>>x>>y>>k;
for(int i=x;i<=y;i++)
	if(i*k>=l&&i*k<=r){
		cout<<"YES"<<endl;
		fuck=true;
		break;
	}
if(!fuck)
	cout<<"NO"<<endl;
		


}