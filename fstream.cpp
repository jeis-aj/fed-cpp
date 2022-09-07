#include <iostream>
#include <fstream>
using namespace std; 	

int main(int argc, char *argv[])
{
	cout<<argc<<endl;
	if(argc != 3){
		cout<<"! exact 2 input"<<endl;
		exit(1);
	}
		ofstream opfile(argv[2]);
		ifstream ipfile(argv[1]);
		char c;
		while(!ipfile.eof())	{
			string line;
			getline(ipfile,line);
			opfile<<line<<endl;
		}
		opfile.close();
		cerr<<"error msg"<<endl;
		
	
	return 0;
}
