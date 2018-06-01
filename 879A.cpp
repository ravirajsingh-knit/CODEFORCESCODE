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
ll n;
cin>>n;
ll S[n],D[n];
for (int i = 0; i < n; ++i)
{
	/* code */cin>>S[i]>>D[i];
}
int t=S[0];
for (int i = 1; i < n; ++i)
{
	/* code */if(S[i]<t){
				int c=(t-S[i])/D[i];
					c++;
				t=S[i]+c*D[i];
			}
		else if(S[i]>t)
			t=S[i];
		else {
			t=S[i]+D[i];
		}
}
cout<<t<<endl;
return 0;	
}