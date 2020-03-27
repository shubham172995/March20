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
		string str;
		loop(i, 0, n){
			str+='a';
		}
		for(int i=n-2;i>=0;i--){
			if((n-i-1)>=k){
				str[i]='b';
				str[n-k]='b';
				break;
			}
			k-=(n-i-1);
		}
		cout<<str<<endl;
	}
	return 0;
}