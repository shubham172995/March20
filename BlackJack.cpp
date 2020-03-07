#include<bits/stdc++.h>

int main(){
	int n;
	std::cin>>n;
	int ans=0;
	int diff=n-10;
	if(n<=0)
		std::cout<<"0\n";
	else{
		if(diff>=1&&diff<=9)
			ans=4;
		else if(diff==10)
			ans=15;
		else if(diff==11)
			ans=4;
		else
			ans=0;
		std::cout<<ans<<std::endl;
	}
	return 0;
}