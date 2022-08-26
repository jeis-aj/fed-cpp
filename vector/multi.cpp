#include <iostream>
#include <sstream>
#include <vector>

using namespace std; 

int ma(int argc, char *argv[])
{
	vector <int> v{2,3,4,5,6,7,8,9};
	char alp[]="abcde";
	/* cout<< <<endl; */
	return 0;
}
void print(const vector<int>&);
int main(int argc, char *argv[])
{
	string line;
	getline(cin,line);
	istringstream is(line);
	char c;
	/* int arr[10]; */
	/* int i =0; */
	vector<int> arr;
	while(is>>c){
		arr.push_back(c-'0');
	}
	if(arr.size()!=10){
		cout<<"not a valid phone number"<<endl;
	}
	print(arr);
	return 0;
}
void print(const vector<int>& arr){
	for(int num: arr){
		cout<<num<<"\t";
	}
}
