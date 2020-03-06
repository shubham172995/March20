#include<iostream>
#include<stdint.h>
#include<fstream>
using namespace std;
//void enc_prep(char din_word[2], char ctrl[8], char din_data[512]);

int main(){
	char din_words[2], control[8], din[512];
	ifstream infile ("/home/shubham/Desktop/data_file.txt");
	infile>>control>>din_words;
	for(int i=0;i<8;i++)
		cout<<control[i];
	cout<<endl;
	for(int i=0;i<2;i++)
		cout<<din_words[i];
	cout<<endl;
	return 0;
}
