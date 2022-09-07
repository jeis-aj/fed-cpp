#include <iostream>
#include <vector>

using namespace std;

vector <int> v{ 8,9,8,9 };
struct data{
int d1;
char d2;
};

void operator<<(ostream& co,const vector<int>& v){
	for (auto val: v){
		co<<val<<'\t';
	}
}

vector<int> v2;
void sum(int n){
	for(int num: v){
	v2.push_back(num+n)	;
	}

}

int main(int argc, char *argv[])
{
cout<<v;
cout<<endl;
cout<<v2;
sum(10);
cout<<endl;
cout<<v2;
cout<<endl;
struct data d1{ 1,'c' };
cout<<d1.d1<<endl;
cout<<d1.d2<<endl;
return 0;
}

