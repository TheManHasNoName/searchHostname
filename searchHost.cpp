#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main (){
	string sd = "";
	string line, exit;
	string text;
	ifstream file("hostnames.csv");
	

	cout << "Enter SD/Long Hostname: ";
	getline (cin, sd);
			
	while(!file.eof()){
		getline(file,text);
				
		if (text.find(sd) != string::npos) {
			cout << text;
			break;
		}
	}
	
	return 0;
}
