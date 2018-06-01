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
int s,v1,v2,t1,t2;
cin>>s>>v1>>v2>>t1>>t2;
//cout<<2*t1+s*v1<<" "<<2*t2+s*v2<<endl;
if(2*t1+s*v1==2*t2+s*v2)
	cout<<"Friendship"<<endl;
else if(2*t1+s*v1>2*t2+s*v2)
	cout<<"Second"<<endl;
else
	cout<<"First"<<endl;
return 0;	
}