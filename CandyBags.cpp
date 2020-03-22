#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> a((n*n)+1);
	for(int i=1;i<a.size();i++){
		a[i]=i;
	}
	int i=1, j=n*n;
	for(int k=0;k<n;k++){
		for(int l=0;l<n/2;l++){
			cout<<a[i]<<" "<<a[j]<<" ";
			++i;
			--j;
		}
		cout<<endl;
	}
	return 0;
}