#include <iostream>
#include <vector>
using namespace std;


vector <uint64_t> fact_r;
uint64_t fact(int num){
	if (num <=1){ return 1; }
	uint64_t result = fact(num-1);
	fact_r.push_back(result);
	result *=num;
	return result;
}

template <typename T>
void operator<<(ostream& co,const vector<T>& v){
	for( auto val: v ){ co<<val<<'\t'; }
}

int main(int argc, char *argv[])
{
	vector <int> num{ 1,2,3,4 };
	int nu;
	while(1){
		fact_r.clear();
	cin>>nu;
	if( nu == 0 ){ break;}
	fact(nu);
	cout<<num;
	cout<<endl;
	cout<<fact_r;
	cout<<endl;
	}
	return 0;
}
int user()
{
	vector <vector <int>> matrix  
	{	{1,2},
		{2,3},
		{3,3} 	 };
	cout<<endl<<fact(20)<<endl<<endl;
	cout<< matrix[1][0] <<endl;
	cout<<endl<<"program terminated !"<<endl;
	return 0;
}
