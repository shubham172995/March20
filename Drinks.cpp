#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	float ans=0.0;
	for(int i=0;i<a.size();i++){
		cin>>a[i];
		ans+=a[i];
	}
	ans=ans/(n+0.0);
	printf("%.6f\n", ans);
	return 0;
}