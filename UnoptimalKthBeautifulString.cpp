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
		loop(i, 0, n-2){
			str+='a';
		}
		str+="bb";
		loop(i, 1, k){
			next_permutation(str.begin(), str.end());
		}
		cout<<str<<endl;
	}
	return 0;
}