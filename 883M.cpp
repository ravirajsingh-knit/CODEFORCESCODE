#include<bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
#define M 1000000007
using namespace std;
int main(){
sync;
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txtb
	freopen("output.txt", "w", stdout);
#endif
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
int m1=abs(x2-1-x1)+abs(y2-y1);
int m2=abs(x2+1-x1)+abs(y2-y1);
int m3=abs(x2-x1)+abs(y2-1-y1);
int m4=abs(x2-x1)+abs(y2+1-y1);
//cout<<m1<<" "<<m2<<endl;
//cout<<m3<<" "<<m4<<endl;
if(x1==x2&&y1==y2)
m3+m4<=m1+m2?cout<<m3+m4+4+4<<endl:cout<<m1+m2+4+4<<endl;
else if(x1==x2||y1==y2)
m3+m4<=m1+m2?cout<<m3+m4+4+2<<endl:cout<<m1+m2+4+2<<endl;
else
m3+m4<=m1+m2?cout<<m3+m4+4<<endl:cout<<m1+m2+4<<endl;

return 0;	
}