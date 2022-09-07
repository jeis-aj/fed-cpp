#include <iostream>	
#include <stack>	
using namespace std; 

int largestMatchingParenthesis(string s){
	stack<char> stk;
	int temp =0,large=0;
	for (auto val: s){
		if (val == '('){
			stk.push(val);
			++temp;
		}
		else if (val ==')'){
			stk.pop();
				if (large < temp){
					large =temp;
					temp =0;
				}
		}
	}
	return large;
}
int recur(string);
int main(){
 string line = "(((()((()))sjljsj kslk)))";
 cout<<largestMatchingParenthesis(line);
 /* cout<<recur(line); */
}

int i=0;
int temp=0;
int large =0;
int recur(string s){
	if (s[i]=='('){
		++i;
		++temp;
		recur(s);
	}
	if (s[i]==')'){
		++i;
		--temp;
		if (large < temp){
			large = temp;
			temp =0;
		}
	}
	return large;
}
