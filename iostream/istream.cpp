#include <iostream>	
#include <vector>
#include <sstream>

using namespace std; 

/* template <typename T> */
/* ostream& operator<<(ostream& co,vector <T>& v); */


/* template <typename T> */
/* istream& operator>>(istream& ci,vector<T>& v); */

template <typename T>
ostream& operator<<(ostream& co,vector <T>& v){
	co<<"[";
	for(auto& val:v){
		co<<"\""<<val<<"\"";
		if(&val != &v.back()){
			co<<",";
		}
	}
	co<<"]";
	return co;
}
template <typename T>
istream& operator>>(istream& ci,vector<T>& v){
	string line;
	getline(ci,line);
	istringstream is(line);
	T val;
	while(is>>val){
		v.push_back(val);
	}
	return ci;
}

int main(int argc, char *argv[])
{
	vector<string>v1;	
	cin>>v1;
	cout<<"value"<<endl;
	cout<<v1;
	return 0;
}

