#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	vector<int> sx(k), sy(k), fx(k), fy(k);
	loop(i, 0, k){
		scanf("%d %d", &sx[i], &sy[i]);
	}
	loop(i, 0, k){
		scanf("%d %d", &fx[i], &fy[i]);
	}
	string ans="";
	loop(i, 0, n-1){
		ans+='U';
	}
	loop(i, 0, m-1){
		ans+='L';
	}
	loop(i, 0, n){
		loop(j, 0, m-1){
			if(i%2==0)
				ans+='R';
			else ans+='L';
		}
		if(i<n-1)
			ans+='D';
	}
	cout<<ans.length()<<endl<<ans<<endl;
	return 0;
}