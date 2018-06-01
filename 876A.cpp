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
int n,a,b,c,s=0;
cin>>n>>a>>b>>c;
int t=0;
n--;
while(n--){
	if(t==0){
		if(a>=b){
			s+=b;
			t=2;
		}
		else{

			s+=a;
			t=1;
		}

		}
	else if(t==1){
		if(a>=c){
			s+=c;
			t=2;
		}
		else{

			s+=a;
			t=1;
		}
	}
	else
	{
		if(c>=b){
			s+=b;
			t=0;
		}
		else{

			s+=c;
			t=1;
		}

		}	

		
}
cout<<s<<endl;
return 0;	
}