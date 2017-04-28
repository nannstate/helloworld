#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
		
	ifstream reader;
	string word;
	int i = 0;

	reader.open("hello.txt");
	cout << "************************************************************" << endl;
	cout << endl;

	while(reader >> word){
		cout << word << ' ';
		i = i+1;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "************************************************************" << endl;

	cout << endl;
	cout << "This text was read from a text file (hello.txt)" << endl;
	cout << "Total words read is " << i << endl;
	cout << endl;

	return 0;
}
