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
ll A[n+1],L[n+1],I[n+1];
bool visited[n+1];
for (int i = 0; i < n; ++i)
{
	/* code */cin>>A[i+1];
		L[i+1]=0;
		visited[i+1]=false;
}
vector< pair<ll,ll> > c;
ll ter=-1;
for (int i = 1; i <= n; ++i)
{
	/* code */
	if(!visited[i]){
		ter++;
		I[i]=ter;
		L[i]++;
		visited[i]=true;
		int j=A[i],len=L[i];
		while(!visited[j]||I[j]!=ter){
			//cout<<ter<<" "<<j<<" "<<len<<endl;
			visited[j]=true;
			I[j]=ter;
			L[j]=++len;
			j=A[j];
		}
		//l.push_back(len);
		if(I[j]==ter){
			c.push_back(pair<ll,ll>(len,len-L[j]+1));
			//cout<<j<<" "<<len<<" "<<L[j]<<endl;
		}

	}
}
/*
for (int i = 1; i <= n; ++i)
{	cout<<L[i]<<" ";
}
cout<<endl;
for (int i = 0; i < l.size(); ++i)
{
	cout<<l[i]<<" ";
}
cout<<endl;

for (int i = 0; i < l.size(); ++i)
{
	cout<<c[i]<<" ";
}
cout<<endl;*/
sort(c.begin(), c.end());
if(c.size()>=2){
	long long temp=0;
	for(int i=0;i<c.size()-2;i++)
		temp+=((((c[i].first-c[i].second)*(c[i].first-c[i].second+1))/2)+c[i].second*c[i].second);
	temp+=((c[c.size()-1].first+c[c.size()-2].first)*(c[c.size()-1].first+c[c.size()-2].first));
	cout<<temp<<endl;
}
else{
	cout<<c[0].first*c[0].first<<endl;
}

return 0;	
}