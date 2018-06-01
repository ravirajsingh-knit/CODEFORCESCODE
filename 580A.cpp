#include<bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
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
int n;
cin>>n;
int A[n],c=1,max=0;
for (int i = 0; i < n; ++i)
{
	/* code */cin>>A[i];
}
for(int i=1;i<n;i++){
	if(A[i]>=A[i-1])
		c++;
	else{
		if(max<c)
			max=c;
		c=1;
	}
}
max=c>max?c:max;
cout<<max<<endl;
return 0;	
}