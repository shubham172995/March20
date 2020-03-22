#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	loop(te, 1, t+1){
		int n, k, p;
		cin>>n>>k>>p;
		vector<vector<int> > plates(n);
		loop(i, 0, n){
			plates[i].resize(k);
			loop(j, 0, k){
				cin>>plates[i][j];
			}
		}
		vector<int> pos(n);
		ll ans=0;
		int a, b;
		a=b=0;
		loop(i, 0, p){
			loop(j, 0, n){
				if(a<plates[j][pos[j]]){
					a=plates[j][pos[j]];
					b=j;
				}
			}
			ans+=a;
			++pos[b];
			//cout<<a<<" "<<b<<endl;
			a=b=0;
		}
		cout<<"Case #"<<te<<": "<<ans;
		if(te<t)
			cout<<endl;
	}
	return 0;
}