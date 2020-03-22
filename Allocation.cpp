#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	loop(te, 1, t+1){
		int n, b;
		cin>>n>>b;
		vector<int> a(n);
		loop(i, 0, n){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		int ans=0, temp=0;
		int i=0;
		/*while(b>0){
			b-=a[i];
			if(b>=0){
				++ans;
				++i;
			}
		}*/
		for(i=0;i<n;i++){
			temp+=a[i];
			if(temp<=b)
				++ans;
			else break;
		}
		cout<<"Case #"<<te<<": "<<ans;
		if(te<t)
			cout<<endl;
	}
	return 0;
}