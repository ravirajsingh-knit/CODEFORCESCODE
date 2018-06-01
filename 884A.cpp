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
ll n,t;
cin>>n>>t;
ll A[n];
for (int i = 0; i < n; ++i)
{
	/* code */cin>>A[i];

}

for (int i = 0; i < n; ++i)
{
	/* code */t-=(86400-A[i]);
	if(t<=0){
		cout<<i+1<<endl;
		break;
	}

}


return 0;	
}