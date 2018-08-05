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
	string s;
	cin>>s;

	//ll p=stoi(s,nullptr,2)
	int t=0,t2=0;
	bool b=false;
	for (int i = 0; i < s.length(); ++i)
	{	
		//cout<<s[i]<<endl;
		if(s[i]=='1')
			b=true;

		if(b){
			//cout<<"sad"<<s[i]<<endl;
			s[i]=='0'?t++:t2++;
		}
		
	}
//	cout<<t<<" "<<t2<<endl;
	if(t>=6&&t2>=1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
return 0;	
}