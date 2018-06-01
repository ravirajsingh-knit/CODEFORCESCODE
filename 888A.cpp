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
ll A[n];
for(int i=0;i<n;i++) cin>>A[i];
int m1=0,m2=0;
for(int i=1;i<n-1;i++){
	if(A[i]>max(A[i-1],A[i+1]))
		m1++;
	if(A[i]<min(A[i-1],A[i+1]))
		m2++;
	
}

cout<<m1+m2<<endl;
return 0;	
}