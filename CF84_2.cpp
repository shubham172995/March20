#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<bool> occ(n+1), coup(n);
		vector<vector<int> > list(n);
		loop(i, 0, n){
			int temp;
			scanf("%d", &temp);
			list[i].resize(temp);
			loop(j, 0, temp){
				cin>>list[i][j];
				if(!coup[i]){
					if(!occ[list[i][j]]){
						occ[list[i][j]]=1;
						coup[i]=1;
					}
				}
			}
		}
		vector<pair<int, int> > res;
		bool flag=false;
		loop(i, 0, n){
			if(coup[i])
				continue;
			loop(j, 1, n+1){
				if(occ[j])
					continue;
				if(binary_search(list[i].begin(), list[i].end(), j))
					continue;
				else{
					res.push_back(make_pair(i+1, j));
					occ[j]=1;
					coup[i]=1;
					flag=true;
					break;
				}
			}
			if(flag)
				break;
		}
		if(res.size()){
			cout<<"IMPROVE\n";
			loop(i, 0, res.size()){
				cout<<res[i].first<<" "<<res[i].second<<endl;
			}
		}
		else cout<<"OPTIMAL\n";
	}
	return 0;
}