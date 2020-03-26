#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n, k;
	cin>>n>>k;
	vector<vector<int> > table(n);
	loop(i, 0, n){
		table[i].resize(n);
		loop(j, 0, n){
			if(i==j)
				table[i][j]=k;
		}
	}
	loop(i, 0, n){
		table[i].resize(n);
		loop(j, 0, n){
			cout<<table[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}