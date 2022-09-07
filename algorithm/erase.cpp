#include <iostream>
#include <string>
#include <vector>

using namespace std; 

template<typename T>
void operator<<(ostream& co,vector<T> v){
	for(auto val:v){
		co<<val<<' ';
	}
}
int main(int argc, char *argv[])
{
	vector <char> ch; 
	char word[]="Arunjyothishk";
	for (auto c:word){
		ch.push_back(c);
	}
	ch.erase(ch.begin()+4,ch.end()-5);
	/* int pos =ch.find('W') */
	cout<<ch;
	cout<<endl;
	cout<<ch[2]-ch[1];	
	return 0;
}
