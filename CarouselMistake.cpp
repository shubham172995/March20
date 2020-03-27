#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		ll n;
		cin>>n;
		vector<ll> t(n+1), c(n+1);
		loop(i, 1, n+1){
			cin>>t[i];
		}
		c[1]=1;
		int prev=1;
		loop(i, 2, n){
			if(t[i]==t[i-1]){
				if(c[i-1]>1){
					c[i]=1;
					prev=1;
				}
				else if(c[i-1]==1){
					c[i]=1;
					prev=1;
				}
			}
			else{
				if(prev==1){
					prev=2;
					c[i]=2;
				}
				else if(prev==2){
					prev=1;
					c[i]=1;
				}
			}
		}
		if(t[n-1]==t[1]&&t[1]==t[n])
			c[n]=c[n-1];
		else if(t[n-1]==t[n]&&c[1]!=c[n-1])
			c[n]=c[n-1];
		else if(c[1]==c[n-1]){
			if(c[1]==1){
				c[n]=2;
			}
			else if(c[1]==2){
				c[n]=1;
			}
		}
		else{
			c[n]=3;
		}
		int max=0;
		loop(i, 1, n+1){
			max=max>c[i]?max:c[i];
		}
		cout<<max<<endl;
		loop(i, 1, n+1){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}