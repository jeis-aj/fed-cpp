/* #include <bits/stdc++.h> */
#include <iostream>
#include <sstream>
#include <vector>

using namespace std; 

int main(int argc, char *argv[])
{
	/* string line; */
	/* getline(cin,line); */

	stringstream ss;
/* auto i='s'; */	
	ss<<"2 9 9 9 8";
	
	vector <int> v;
	int num;
	while(ss>>num)	{
		v.push_back(num);
	}
	
	for(int num:v){
		cout<<" cont: "<<num<<endl;
	}
	/* cin>>i; */
	/* cout<<i<<endl; */
	return 0;
}
