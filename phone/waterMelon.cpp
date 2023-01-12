#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int solve ()
{
	int nos,temp;
	cin >> nos;
	vector <int> vect(nos);
	for (int &val: vect){
		cin >> val;
	}
	sort(vect.begin(),vect.end());
	typedef pair<int,int> prD;
	prD tempPr;
	vector<prD> cont;
	for(int i =0; i < vect.size()-1; ++i){
		for(int j =i+1; j < vect.size(); ++j){
			if (vect[i]*2 <= vect[j]){
				tempPr = {i,j};
				cont.push_back(tempPr);
				goto L1;
			}
		}
	L1:continue;
	}
	cout << cont.size() <<"  " << nos - cont.size()*2 << endl;
	return 0;
}

int main(int argc, char *argv[])
{
	int testNo;
	cin >> testNo ;
	while(testNo--){
		solve();
	}
	return 0;
}
