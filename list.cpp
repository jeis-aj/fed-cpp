#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
template <typename T>
void operator<<(ostream& co,const list <T>&l){
	for (int val:l){
		co<<val<<'\t';
	}
}
int main(int argc, char *argv[])
{
	list<int> li;
	li ={ 1, 3, 5,7 };
	cout<<li;
	cout<<(int*)(li.begin())<<endl;
	{

	}
	return 0;
}
