#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	int min=101;int max=0;
	int mi, ma=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=min){
			min=a[i];
			mi=i+1;
		}
		if(a[i]>max){
			max=a[i];
			ma=i+1;
		}
	}
	int ans=0;
	/*if(min==max){
		cout<<"0"<<endl;
	}*/
	if(mi>ma){
		ans+=n-mi;
		ans+=ma-1;
	}
	else{
		ans+=n-mi;
		ans+=ma-2;
	}
	cout<<ans<<endl;
	return 0;
}