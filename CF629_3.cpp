#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		cin>>n;
		vector<char> x(n);
		loop(i, 0, n){
			cin>>x[i];
		}
		ll za=0, zb=0;
		vector<char> a(n), b(n);
		for(int i=n-1;i>=0;i--){
			if(x[i]=='0'){
				a[i]='0';
				b[i]='0';
				++za;
				++zb;
			}
			else if(x[i]=='1'){
				a[i]='0';
				b[i]='1';
				++za;
			}
			else if(x[i]=='2'){
				a[i]='1';
				b[i]='1';
			}
		}
		if(a[0]=='0'){
			a[0]='2';
			b[0]='2';
		}
		bool flag=false;
		if(a[0]==b[0])
			flag=true;
		loop(i, 1, n){
			if(a[i]==b[i]&&flag)
				continue;
			if(a[i]==b[i]&&!flag){
				if(a[i]=='0')
					continue;
				if(a[i]=='1'){
					a[i]='0';
					b[i]='2';
				}
				else if(a[i]=='2'){
					a[i]='0';
					b[i]='1';
				}
			}
			if(a[i]<b[i]&&flag){
				a[i]='1';
				b[i]='0';
				flag=false;
			}
		}
		loop(i, 0, n)
			cout<<a[i];
		cout<<endl;
		loop(i, 0, n)
			cout<<b[i];
		cout<<endl;
	}
	return 0;
}