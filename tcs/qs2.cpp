#include <iostream>
#include <vector>
#include <sstream>
#include <string>


using namespace std; 

class player{
	int player_id;
	vector <bool> arr;
	int even_count;
	public:
	int count_odd();
	bool is_even();
	void entry(){
		string line;
		int num;
		getline(cin,line);
		istringstream int_stream(line);
		while(int_stream>>num){
		arr.push_back(num)	;
		}
	}
	void print(){
		for(int num:arr){
			cout<<"cont: "<<num<<'\t';
		}
	}
};

int player::count_odd(){
	int even =0;
	for (int num: arr){
		if(num){
			even++;
		}
	}
	even_count = even;
	cout<<"even: "<<even<<endl;
	return arr.size()-even;
}
bool player::is_even(){
	count_odd();
	return even_count%2 == 0?true:false;
}
int main(int argc, char *argv[])
{
	player s;
	s.entry();
	/* s.count_odd(); */
	cout<<(s.is_even()?"jessica wins":"jessica fail")<<endl;
	/* s.print(); */

	return 0;
}
