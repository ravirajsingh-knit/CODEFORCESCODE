#include<bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#define M 1000000007
using namespace std;
int main(){
sync;
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
ll t,n,x,s=0;
cin>>t>>n;
for (int i = 0; i < t; ++i)
{
	/* code */cin>>x;
	s+=x;
}
if(s+t-1==n)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;

return 0;	
}