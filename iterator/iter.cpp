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

template <typename T,typename S>
void printIter( T);
int main(int argc, char *argv[])
{
	/* list<int> v{1,2,3,5,6}	; */
	list<char> v={'a','b','c'};
	v.reverse();
	v.sort();
	vector<int> s{1,2,3,5,6}	;
	/* print<list<int>>(v); */
	/* printIter(v); */
	printIter<vector<int>,int>(s);
	return 0;
}

template <typename T,typename S>
void printIter( T li){

		vector<int>::iterator it;
		for (it = li.begin();it != li.end();++it){
			cout<<"val: "<<*it<<endl;
		}
}
