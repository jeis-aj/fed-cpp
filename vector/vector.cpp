#include <iostream>
#include <sstream>
#include <vector>
using namespace std; 

void print(const vector<int>& s){
	for(int num: s){
		cout<<num<<"\t";
	}
	cout<<endl;
}
int ma(int argc, char *argv[])
{
	vector <int> r{1, 2,3};
	cout<<( r.empty()?"empty":"not empty")<<endl;
	print(r);
	vector <int> l;
	l.push_back(1);
	cout<<( l.empty()?"empty":"not empty")<<endl;
	print(l);
	l.pop_back();
	cout<<( l.empty()?"empty":"not empty")<<endl;
	print(l);
	return 0;
	
}
int main(int argc, char *argv[])
{
	vector <int> v;
	int num;
	string line;
	getline(cin,line);
	istringstream is(line);
	while(is>>num){
		v.push_back(num);
	}
	print(v);
	return 0;
}
