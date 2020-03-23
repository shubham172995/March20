#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, k;
		cin>>n>>k;
		if(!(n&1)&&(k&1)){
			cout<<"NO\n";
			continue;
		}
		else if((n&1)&&!(k&1)){
			cout<<"NO\n";
			continue;
		}
		else{
			ll temp=k*k;
			if(temp<=n)
				cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}