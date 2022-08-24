#include <iostream>
using namespace std;

int main(){

	string str;
	getline(cin,str);
	char vowels[]="aeiou";
int count =0;
	for(int ch:str){
		for(int v:vowels){
			if(ch==v){
				count++;
			}
		}
	}
	cout<<"nos of vowels: "<<count<<endl;
}
