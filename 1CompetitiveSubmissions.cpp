#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

ll ans=0;
vector<vector<int> > plates(1);

void fun(int rest, int row, int col, int k, int n, int tot, vector<int> pos){
	pos[row]=1;
	if(rest==0){
	    ans=ans>tot?ans:tot;
		return;
	}
	tot+=plates[row][col];
	if(col<k-1)
		fun(rest-1, row, col+1, k, n, tot, pos);
	loop(i, 0, n){
		if(pos[i])
			continue;
		col=0;
		fun(rest-1, i, col, k, n, tot, pos);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	loop(te, 1, t+1){
		int n, k, p;
		cin>>n>>k>>p;
		plates.resize(n);
		loop(i, 0, n){
			plates[i].resize(k);
			loop(j, 0, k){
				cin>>plates[i][j];
			}
		}
		vector<int> pos(n);
		int a, b;
		a=b=0;
		loop(i, 0, n)
		fun(p, i, b, k, n, 0, pos);
		cout<<"Case #"<<te<<": "<<ans;
		if(te<t)
			cout<<endl;
		loop(i, 0, n)
			plates[i].clear();
		plates.resize(1);
		ans=0;
	}
	return 0;
}