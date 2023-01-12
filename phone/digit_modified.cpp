#include <iostream>
#include <vector>
#include <list>
using namespace std; 

vector <string> map ={ "",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
void str_fn(list <int>l, vector<string> v, vector<string>& result) {
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

list<int> input(){
	char length;
	cin >> length ;
	list<int>l(length-'0');
	for (int &c:l){
		char temp;
		cin >> temp;
		c = temp-'0';
	}
	return l;
}

void print(auto cont){
	for(auto val: cont){
		cout << val <<endl;
	}
}

int main(int argc, char *argv[])
{
	auto l = input();
	vector <string> out;
	str_fn(l,map,out);
	cout << out.size() <<endl;
	print(out);
	return 0;
}
