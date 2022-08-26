#include <iostream>
#include <vector>
#include <sstream>
using namespace std; 

class players{
	int score;
	int distinct;
	int num;
	int size;
	/* int arr[50]; */
	int distinct_fn(void);
	string line;
	public:
	vector<int>arr;

	players(){
		distinct =0;
		score = 0;
	}
	void entry(){
		/* cin.ignore(); */
		getline(cin,line);
		istringstream int_stream(line);
		/* int i =0; */
		/* cout<<"stream: "<<line; */
		while(int_stream>>num){
			arr.push_back(num);
			score++;
			/* arr[i]=num; */
			/* i++; */
		}
		/* size = i; */
		/* cout<<"size: "<<size<<endl; */
		/* print(); */
	}
	int print(){
		/* score =0; */
		for(int num:arr){
			cout<<"content: "<<num<<'\t';
			score++;
		}
		cout<<endl<<"xscore: "<<score<<endl;
		return score;
	}
	int getScore(){
		cout<<"Score: "<<score<<endl;
		return score;
	}
	int score_fn(){
		/* getScore(); */
		distinct_fn();
		/* cout<<"score: "<<score<<endl; */
		if(distinct>8){
			score+=4;
		}
		else if(distinct>6){
			score+=2;
		}
		else if(distinct>4){
			score+=1;
		}
		return score;
	}

};
int players::distinct_fn(){
	int not_distinct=0;
	for(int i=0; i<arr.size()-1;i++){
		for(int j=i+1 ;j< arr.size();j++){
			if(arr[i]==arr[j])	{
				not_distinct++;
				/* cout<<"dis: "<<distinct<<endl; */
			}
		}
	}
	distinct = arr.size() - not_distinct/2;
	cout<<"distinct : "<<distinct<<endl;
	return distinct;
	
}

int man(){
	players a;
	a.entry();
	players b;
	b.entry();
	b.print();
	a.print();
	return 0;
}
int main(){
	cout<<"Enter number of Players: "<<endl;
	int pl;
	cin>>pl;
	cout<<"Enter digits stream by-line for each player: "<<endl;
	players p_arr[pl];

	cin.ignore();
	for(players& p:p_arr){
		p.entry();
		/* p.print(); */
	}
	int i=1;
	for(players& d:p_arr){
		/* d.print(); */
		d.getScore();
		/* cout<<"print: "<<endl; */
		/* cout<<endl; */
		cout<<"Score of "<<i<<" is "<<d.score_fn()<<endl;
		i++;
		/* cout<<"xscore: "<< d.print()<<endl; */
	}
return 0;
}
