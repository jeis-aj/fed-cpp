#include <iostream>
#include <list>
#include <sstream>
#include <vector>
#include <string>

using namespace std; 

void print(const vector<string>& v);
void str_fn(list <int>l, vector<string> v, vector<string>& result);
vector <string> map ={ "",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
list<int> input();
int main(int argc, char *argv[])
{
	list <int>l;
	l = input();
	vector <string> out;
	str_fn(l,map,out);
	print(out);
	return 0;
	
}
list<int> input(){
	string line;
	cin>>line;
	list<int>l;
	for (char c:line){
		l.push_back(c-'0');
	}
	return l;
}
void print(const vector<string>& v){
	cout<<"[";
	for(auto &val : v){
		cout<<" \""<<val<<"\" ";
		if(!(&val==&v.back())){
		cout<<",";
		}
	}
	cout<<"]"<<endl;
	cout<<endl;
}

void str_fn(list <int>l, vector<string> v,vector<string>& result){
		static string str="";
	if (l.empty()){
		result.push_back(str);
		return ;// base condition for stop recursion -digit end-
	}
		int num = l.front();
		l.pop_front();			// pop provided digit sequence from the front in each recursion
	for (char c: map[num]){		// each character from map -vector ,index-
		str+=c;
		str_fn(l,v,result);
		str.pop_back();
	}
	return ;
}
