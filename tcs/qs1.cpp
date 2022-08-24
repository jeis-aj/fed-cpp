#include <iostream>
#include <vector>
#include <sstream>
using namespace std; 

class players{
	int score;
	int distinct;
	int num;
	int size;
	/* vector<int>arr; */
	int arr[50];
	int distinct_fn(void);
	string line;
	public:
	/* players(){ */
	/* 	score = 0; */
	/* } */
	void entry(){
	cin.ignore();
	getline(cin,line);
	istringstream int_stream(line);
	int i =0;
		while(int_stream>>num){
			/* arr.push_back(num); */
			arr[i]=num;
			i++;
		}
		size = i;
		cout<<"size: "<<size<<endl;
		/* print(); */
	}
	int print(){
		score =0;
		for(; size;size--){
			cout<<"content: "<<arr[score]<<'\t';
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
		int yscore =0;
		for(;size;size--){
			yscore+=1;
			cout<<" lk "<<endl;
		}
		/* getScore(); */
		return yscore;
		/* distinct_fn(); */
		/* cout<<"score: "<<score<<endl; */
		/* if(distinct>8){ */
		/* 	score+=4; */
		/* } */
		/* else if(distinct>6){ */
		/* 	score+=2; */
		/* } */
		/* else if(distinct>4){ */
		/* 	score+=1; */
		/* } */
	}
	
};
int players::distinct_fn(){
	for(int vl: arr){
		for(int l: arr){
			if(l!=vl)	{
				distinct++;
			}
		}
	}
	distinct/=2;
	return distinct;
}

int main(){
	cout<<"Enter number of Players: "<<endl;
	int pl;
	cin>>pl;
	cout<<"Enter digits stream by-line for each player: "<<endl;
	players p_arr[pl];

	for(players p:p_arr){
		p.entry();
	}
	int i =1;
	for(players d:p_arr){
		d.print();
		d.getScore();
		cout<<"print: "<<endl;
		cout<<endl;
	/* cout<<"Score of "<<i<<" is "<<d.score_fn()<<endl; */
	/* i++; */
	/* cout<<"xscore: "<< d.print()<<endl; */
	}
	
}
