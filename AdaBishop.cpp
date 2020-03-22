#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int row[]={1, 1, -1, -1};
int col[]={1, -1, 1, -1};
vector<vector<int> > cnt(8);
int ch=1;
vector<pair<int, int> > p;

bool valid(int x, int y){
	if(x<0||y<0||x>=8||y>=8||cnt[x][y]>=2)
		return false;
	return true;
}

void dfs(int x, int y){
	if(ch>=32)
		return;
	for(int i=0;i<4;i++){
		if(cnt[x][y]==2&&cnt[x+row[i]][y+row[i]]){
			continue;
		}
		x+=row[i];
		y+=col[i];
		//cout<<x<<" "<<y<<" "<<valid(x, y)<<endl;
		if(valid(x, y)){
			++cnt[x][y];
			pair<int, int> temp;
			temp.first=x+1;
			temp.second=y+1;
			p.push_back(temp);
			if(cnt[x][y]==1)
				++ch;
			dfs(x, y);
		}
		else{
			x-=row[i];
			y-=col[i];
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		for(int i=0;i<8;i++)
			cnt[i].resize(8);
		int r0, c0;
		scanf("%d %d", &r0, &c0);
		dfs(r0-1, c0-1);
		int ans=0;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++)
				ans+=cnt[i][j];
		}
		//cout<<ans<<endl;
		cout<<p.size()<<endl;
		for(int i=0;i<p.size();i++){
			cout<<p[i].first<<" "<<p[i].second<<endl;
		}
		p.clear();
		cnt.clear();
		/*for(int i=0;i<8;i++){
			for(int j=0;j<8;j++)
				cout<<cnt[i][j]<<" ";
			cout<<endl;
		}*/
	}
	return 0;
}

