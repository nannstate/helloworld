#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
		
	ifstream fin;
	string word;
	fin.open("hello.txt");
	cout << "************************************************************" << endl;
	cout << endl;

	while(fin >> word){
		cout << word << ' ';
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "************************************************************" << endl;

	cout << endl;
	cout << "This text was read from a text file." << endl;
	cout << endl;

	return 0;
}
