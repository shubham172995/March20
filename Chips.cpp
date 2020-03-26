#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n, m;
	cin>>n>>m;
	int sum=n*(n+1);
	sum/=2;
	m=m%sum;
	loop(i, 1, n+1){
		m-=i;
		if(m<0){
			m+=i;
			break;
		}
	}
	cout<<m<<endl;
	return 0;
}