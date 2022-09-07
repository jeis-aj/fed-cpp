#include <iostream>
#include <algorithm>
#include <vector>
/* #include <list> */
/* #include <iterator> */

using namespace std; 
void print (const vector<int>&);

int main(int argc, char *argv[])
{
	vector <int> num{ 1,2,4,7 ,3,8 };
	swap(num[1],num[4]);
	print(num);
	cout<<endl;
	reverse(num.begin(),num.end());
	print(num);
	return 0;
}

void print(const vector<int>& v){
	for(int val:v){
		cout<<val<<'\t';
	}
}
