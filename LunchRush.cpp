#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, k;
	cin>>n>>k;
	long long ans= INT_MIN;
	for(int i=0;i<n;i++){
		long long f, t;
		cin>>f>>t;
		if(t>k){
			long long temp=f-(t-k);
			ans=ans>temp?ans:temp;
		}
		else ans=ans>f?ans:f;
	}
	cout<<ans<<endl;
	return 0;
}