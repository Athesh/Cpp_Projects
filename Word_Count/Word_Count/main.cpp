#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFileToConsole(string fileName) {
	string line;
	ifstream document(fileName); //ifstream = input file stream

	if (document.is_open()) {
		while (getline(document, line)) {
			cout << line << '\n';
		}
		document.close();
	} else cout << "Sorry, wasn't able to open the document :(\n";
}

int main() {
	readFileToConsole("something.txt");
	readFileToConsole("document.txt");

	cout << "Hey I don't know how to keep my console open ... so I gotta do it through breakpoint on the end.";
}