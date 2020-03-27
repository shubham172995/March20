#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b;
		cin>>a>>b;
		ll rem=a%b;
		rem=rem==0?rem:b-rem;
		cout<<rem<<endl;
	}
	return 0;
}