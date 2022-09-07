#include <iostream>	
#include <sstream>	
#include <vector>
using namespace std; 

vector<string> entry(){
	char c;
	cin.get(c);
	//  input _1_,8__9_32,_78_8
	//  output 8_9_32
	//  input _2_,8__9_32,_78_8
	//  output 8_9_32,78_8
	//  
	//
	bool no =true;
	vector<string>v;
	string line="";
	int nop;
	while(cin.get(c) && no){
		 if (c==' '){
			continue;
		}
		else if (!(c==',' || c=='\n')){
			line +=c;
		}
		 else{
			 do{
				 /* nop = v.front(); */
			 }while(false);

			v.push_back(line);
			/* no--; */
		}
			v.push_back(line);
	}
	return v;
}

template<typename T>
ostream& operator<<(ostream& co,const vector<T>& v){
	for(T val: v){
		co<<val<<'\t';
	}
	return co;
}

int main(int argc, char *argv[])
{
	/* vector v { 1,4 ,5 }	; */
	/* vector  v = entry(); */
	int val;
	cin>>val;
	cout<<val;
	return 0;
}
