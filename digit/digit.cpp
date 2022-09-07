#include <iostream>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <list>
using namespace std; 
void print(const vector<int>& num);

template <typename T>
istream& operator>>(istream& ci,vector<T>& v){
	string line;
	getline(ci,line);
	istringstream int_stream(line);
	char ph;
	while(int_stream>>ph){
		v.push_back(ph-'0');
	}
	return ci;
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
template <typename T>
void fn(vector<T> v){
	for(int num:v){
		cout<<setw(80)<<"."<<endl;
	}
}
vector <string> alp={
	"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};
void fn (const vector<int>& num, vector<string>& output);
int main(){
	cout<<"Enter a number stream: "<<endl;
	typedef int digit;
	vector <digit> num;
	vector <string> result;
	cin>>num;
	/* fn(num,result); */
	cout<<"____________________________________________________________"<<endl;
	cout<<num<<endl;
	return 0;	
	
}

void fn (const vector<int>& num, vector<string>& word)
{
	static int Dcount=0;
	static int Wcount=0;
	if (!Dcount){
		return ;
	}
	string t_word = alp[num.back()];
	static string line ="";
	word.push_back(line);
	if (t_word.length()-1 == Dcount){
		line ="";
		Dcount =0;
	};
	++Dcount;
	fn(num,word);
	line+=word[num.back()];
	int sz = t_word.length();
}
