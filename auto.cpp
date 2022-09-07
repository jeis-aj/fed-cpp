/* #include <bits/stdc++.h> */
#include <iostream>
#include <iomanip>
#include <iterator>
#include <sstream>
#include <vector>
#include <list>

using namespace std; 

template <typename T>
ostream& operator<<(ostream& co, const list<T>& l){
	for (int num:l){
		co<<num<<'\t';
	}
	return co;
}
template <typename T>
ostream& operator<<(ostream& co, const list<list<T>>& l){
	for (list<int>num:l){
	co<<setw(80);
	co.fill('.');
	for (int n:num){
		co<<n<<'\t';
	}
	co<<endl;
}
return co;
}

template <typename T>
istream& operator>>(istream& ci, list<T>& l){

	string line;
	getline(ci,line);
	istringstream is(line);
	int num;
	while (is>>num){
		l.push_back(num);
	}
	return ci;
}
void swap(int* num,int* num2,bool& flag){
	*num+=*num2;
	*num2=*num-*num2;
	*num=*num-*num2;
	flag =true;
}
int main(int argc, char *argv[])
{
	list <int> num;
	list <list<int>> n{ {1,2},{8,3} };
	/* cin>>num; */
	cout<<n;
	
	int i =0,j=1;
	/* cout<<num<<endl; */
	/* showlist(num); */


	/* while(1){ */
	/* 	bool flag = false; */
	/* 	for(i;i<num.size()-1;++i,++j){ */
	/* 		swap((num.begin()+i),(num.begin()+j),flag); */
	/* 	} */
	/* 	if (!flag){ */
	/* 		break; */
	/* 	} */
	/* } */
}

int ma(int argc, char *argv[])
{
	/* string line; */
	/* getline(cin,line); */

	/* stringstream ss; */
	/* auto i='s'; */	
	/* ss<<"2 9 9 9 8"; */
	/* char line[] = "hello"	; */
	/* cout<<line*5<<endl; */
	/* vector <int> v; */
	/* int num; */
	/* while(ss>>num)	{ */
	/* 	v.push_back(num); */
	/* } */

	/* for(int num:v){ */
	/* 	cout<<" cont: "<<num<<endl; */
	/* } */
	/* cin>>i; */
	/* cout<<i<<endl; */
	return 0;
}
