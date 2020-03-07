#include<bits/stdc++.h>
using namespace std;

int main(){
	enum state{zero = 0, one, two} ch;
	switch(ch){
		case zero:
			ch=one;
			cout<<"Hey, ";
			break;
		case one:
			ch=two;
			cout<<"There! ";
			break;
		case two:
			cout<<"\nHow are you?\n";
			break;
	}
	return 0;
}