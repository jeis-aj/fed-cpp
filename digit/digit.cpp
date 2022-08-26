#include <iostream>
#include <sstream>
#include <vector>
using namespace std; 
void print(const vector<int>& num);

template <typename T>
ostream& operator<<(ostream& myco,vector<T>& v);
int main(){
	string line;
	vector <int>num;
	cout<<"Enter a number stream: "<<endl;
	getline(cin,line);
	istringstream int_stream(line);

	char ph;
	while(int_stream>>ph){
		num.push_back(ph-'0');
	}

vector <string> alp={
	"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
	};

	/* string word=""; */
	/* for(int c: num){ */
	/* 	/1* cout<<alp[c]<<endl; *1/ */
	/* 	for (char z:alp[c]){ */
	/* 	/1* cout<<z<<endl; *1/ */	
	/* 	word+=z; */

	/* 	} */
	/* } */
	cout<<alp<<endl;

	return 0;	
}
template <typename T>
ostream& operator<<(ostream& myco,vector<T>& v)
{
	myco<<"[";
	int i =0;
	for(auto val: v){
		myco<<"\""<<val<<"\"";
		if(i!=v.size()-1){
		myco<<",";
		}
		i++;
	}
	myco<<"]";
	return myco;
}

void print(const vector<int>& num){
	for(int n:num){
		cout<<"val: "<<n<<endl;
	}
}
