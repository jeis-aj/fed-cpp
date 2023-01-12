#include <iostream>
using namespace std; 

int man(string line)
{
	string substr="";
	string str;
	string large;
	char val;
	int index =0;
		for (int i =0;i<line.length();++i){
			val = line[i];
			for (int j =0;j<substr.length();++j){
				char c =substr[j];
				if(val == c){
					if (str.length()<substr.length()){
						str = substr;
					}
					substr="";
				}
			}
			substr+=val;
		}
		cout<<substr<<endl;
	return 0;
}
int main(int argc, char *argv[])
{
	string word;
	while(1){
	cin>>word;
	man(word);
	}
	return 0;
}
int in(int argc, char *argv[])
{
	string name  ="arun";
	string str ="arun jyothish ar";
	for(auto val: name){
		for(auto l: str){
			if (val == l){
				cout<<"val: "<<val<<'\t';
				cout<<"l : "<<l<<'\n';
			}
		}
	}
	cout<<"next: "<<endl;
	if (name[0]== str[str.length()-2]){
	cout<<"val: ";
	cout<<"l : ";
	}
	return 0;
}
