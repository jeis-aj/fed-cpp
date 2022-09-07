#include <iostream>
#include <vector>
#include <iterator>
#include <list>

using namespace std; 


template<typename T>
void print (const T& v ){
	for(auto val: v){
		cout<<val<<endl;
	}
}

int main(int argc, char *argv[])
{
	list<int> v{1,2,3,5,6}	;
	v.reverse();
	v.sort();
	vector<int> s{1,2,3,5,6}	;
	print<list<int>>(v);
	return 0;
}
