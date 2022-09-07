#include <iostream>
#include <vector>
/* #include <stdexcept> */
#include <string>
using namespace std; 
int main(int argc, char *argv[])
{
	vector <int> num{ 1,2,3 };
	string line="hello world";
	int  a = 10;
	int  b = 20;
	cout<< "a: "<<a<<" ref: ";
	cout<<&a<<endl;
	cout<< "b: "<<b<<" ref: ";
	cout<<&b<<endl;
	try{
		swap(a,b);
		cout<<line.substr(line.size()+1);
	}
	catch(std::out_of_range e){
		string err ;// = string(e)
		cout<<"OUT OF RANGE "<<endl;
	}
	catch(...){
		cout<<"DIV BY ZERO"<<endl;
	}
	cout<<line<<endl;
	int l =num.back();
	cout<<l<<endl;
	num.pop_back();
	int ll =num.back();
	cout<<ll<<endl;
	/* line.pop_back(); */
	/* cout<<ch<<endl; */
	cout<<line<<endl;
	cout<< "a: "<<a<<'\t'<<&a<<endl;
	cout<< "b: "<<b<<'\t' <<&b<<endl;
	return 0;
}
