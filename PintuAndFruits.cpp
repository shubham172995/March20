#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		vector<int> f(n), p(n), ans(m+1);
		vector<bool> ch(m+1, false);
		for(int i=0;i<n;i++){
			scanf("%d", &f[i]);
			ch[f[i]]=true;
		}
		loop(i, 0, n){
			scanf("%d", &p[i]);
		}
		loop(i, 0, n){
			ans[f[i]]+=p[i];
		}
		int min=INT_MAX;
		loop(i, 1, m+1){
			if(!ch[i]){
				continue;
			}
			min=min<ans[i]?min:ans[i];
		}
		cout<<min<<endl;
		/*for(int i=0;i<=m;i++)
			cout<<ans[i]<<" ";*/
	}
	return 0;
}