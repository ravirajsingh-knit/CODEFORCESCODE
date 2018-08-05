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
int t;
cin>>t;
while(t--){
	string s;
	cin>>s;
	if(s.length()<=10)
		cout<<s<<endl;
	else
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	}
return 0;	
}