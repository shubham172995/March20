#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int r, c;
	scanf("%d %d", &r, &c);
	vector<vector<char> > cake(r);
	vector<bool> row(r), col(c);
	loop(i, 0, r){
		int temp=0;
		cake[i].resize(c);
		loop(j, 0, c){
			cin>>cake[i][j];
			if(cake[i][j]=='S')
				temp++;
		}
		if(!temp)
			row[i]=true;
	}
	loop(i, 0, c){
		int temp=0;
		loop(j, 0, r){
			if(cake[j][i]=='S'){
				++temp;
				break;
			}
		}
		if(!temp)
			col[i]=true;
	}
	int ans=0;
	loop(i, 0, r){
		if(!row[i])
			continue;
		loop(j, 0, c){
			cake[i][j]='E';
		}
	}
	loop(j, 0, c){
		if(!col[j])
			continue;
		loop(i, 0, r){
			cake[i][j]='E';
		}
	}
	loop(i, 0, r){
		loop(j, 0, c){
			ans+=cake[i][j]=='E'?1:0;
		}
	}
	cout<<ans<<endl;
	return 0;
}