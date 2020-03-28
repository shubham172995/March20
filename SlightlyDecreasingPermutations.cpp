#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> p(n);
	int max=n, min=1;
	loop(i, 0, n){
		if(k==1&&i==0){
			p[i]=min+1;
			p[i+1]=min;
			++i;
			min+=2;
			--k;
		}
		else if(--k>=0){
			p[i]=max;
			--max;
		}
		else{
			p[i]=min;
			++min;
		}
	}
	loop(i, 0, n){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	return 0;
}