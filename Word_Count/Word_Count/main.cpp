#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream txtFile;
	txtFile.open("document.txt");
	txtFile << "Hey I really want to pass this semester.\n";
	txtFile.close();
}