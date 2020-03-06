#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	ll a, b, n;
	string ans="";
	cin>>a>>b>>n;
	ll temp=a;
	while(temp){
		int k=temp%10;
		char ch='0'+k;
		ans=ch+ans;
		temp/=10;
	}
	bool flag=false;
	lloop(i, 0, 10){
		temp=a*10+i;
		if(temp%b==0){
			ans+=('0'+i);
			flag=!flag;
			break;
		}
	}
	if(!flag)
		cout<<"-1\n";
	else{
		cout<<ans;
		lloop(i, 1, n){
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}