#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

string* readInfo() {
	//check to see if the file already exists, error
	ifstream infile;
	infile.open("userInfo.txt");
	
	string* userInfo = new string[2];
	string line;
	
	getline(infile, line);
	
	int i = 0;
	while (line[i] != ',') {
		userInfo[0] += line[i];
		i++;
	}
	i++;
	while (line[i]) {
		userInfo[1] += line[i];
		i++;
	}
	
	return userInfo;
}

int main() {
	string* info = readInfo();
	cout << info[0] << " " << info[1] << endl;
}