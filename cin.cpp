// C++ program to illustrate the take
// multiple input
#include <iostream>
#include <vector>
using namespace std;

// Driver Code
int main()
{
	vector <int> l;
	vector <vector <int>> result;
	l ={ 1,3,35,55  };  // array they're giving
	int i;
	for (int z: l){
		i =z;

		if ( i == j ){
			continue;
		}
		else{
			int k;
			for (int y :l){
				k =y;

				if (k ==j || i ==k){
					continue;}
				else{
					int j;

					for (int x: l){
						j=x;
					}
					else {
						int sum;
						sum = i + j +k ;
						if(!sum){
							vector <int> sub;
							sub.push_back(i);
							sub.push_back(j);
							sub.push_back(k);
							result.push_back(sub);
						}

					}
				}

			}

		}

