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
ll n,k;
cin>>n>>k;
ll A[n],m=0;
for (int i = 0; i < n; ++i){ 
	cin>>A[i];
	m=m<A[i]?A[i]:m;
}
if(k>=n)
	cout<<m<<endl;
else{
	int p=0,w=A[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */if(A[i]<w)
						p++;
					else{
						p=1;
						w=A[i];
					}

				if(p==k) break;

	}
cout<<w<<endl;
}
return 0;	
}