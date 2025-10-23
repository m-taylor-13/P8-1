#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main(void) {
	string s = "dog";
	int length = countCharacter(s);
	cout << "String " << s << " is " << length << " characters long.";
}

int countCharacter(string str) {
	return str.length();
}