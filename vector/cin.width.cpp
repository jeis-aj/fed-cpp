#include <iostream>
#include <vector>
#include <sstream>

using namespace std; 

void print(const vector<int>& s);
void chk_empty(const vector<int>& arr);
int main(int argc, char *argv[])
{
	vector <int> arr;
	string str;
	arr.push_back(8);
	arr.push_back(3);
	arr.push_back(6);
	int &ref = arr.back();
	vector <int> new_arr;
	new_arr = arr;	
	ref++;
	cout<<(new_arr==arr?"equal vectors":"unequal vectors")<<endl;
	print(new_arr);
/* chk_empty(new_arr); */
/* chk_empty(arr); */
	/* cout<<arr.back()<<endl; */
	/* print(arr); */
	/* while(cin>>getw(5)>>str); */
	/* cout<<str<<endl; */
	return 0;
}
void print(const vector<int>& s){
	for(int num:s){
		cout<<num<<endl;
	}
}
void chk_empty(const vector<int>& arr){

	if(arr.empty()){
		cout<<"empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}
}
