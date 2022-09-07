#include <iostream>
#include <math.h>
#include <list>
#include <sstream>
#include <vector>

using namespace std; 

template <typename T>
ostream& operator<<(ostream& co,vector<T>& l){
	co<<"[\t";
	for (T &n:l){
		co<<n;
		co<< (&n!=&l.back()?"\t":"\t]");
	}
	return co;
}
template <typename T>
istream& operator>>(istream& ci,vector<T>& l){
	string line;
	getline(ci,line);
	istringstream is(line);
	T val;
	while(is>>val){
	l.push_back(val);
	}
	return ci;
}
vector <int> operator+(const vector<int>& li1,const vector<int>& li2){
	vector<int> list;
	if(li1.size()!=li2.size()){
		cout<<"lists aren't same length"<<endl;
	}
	else{
	int i=0;
	while(i<li1.size()){
		list.push_back(li1[i]+li2[i]);
		++i;
	}
}
	return list; 
	
}
template <typename T>
T fn(T& v){
	/* type(v); */
	for (auto val:v){
		cout<<val<<endl;
	}
	return v;
}
bool isPrime(auto num){
	for (int i=2;i<=sqrt(num);++i){
		if(!(num%i)){
			return false;
		}
	}
	return true;
}
void fori(){
	cout<<"overloded"<<endl;
}
int main(int argc, char *argv[])
{
	vector<int>li{ 1, 2, 4, 5, 7 };
	fn(li);
	cout<<endl;
	for (auto val: li){
		if (isPrime(val)){
			cout<<val<<'\t';
		}
	}
	cout<<endl;
	fori();
	/*
	   vector <int> int_1;
	vector <int> int_2;
	cout<<"Enter a list"<<endl;
	cin>>int_1;
	cout<<"Enter a another list"<<endl;
	cin>>int_2;
	cout<<"first list"<<endl;
	cout<<int_1<<endl;	
	cout<<"second list"<<endl;
	cout<<int_2<<endl;	
	vector <int> result;
	result =int_2+int_1;
	cout<<"result list"<<endl;
	cout<<(result)<<endl;
	*/
	cin.get();
	return 0;

}	
