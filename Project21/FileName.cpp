#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countVowel(string str);

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q") break;

		else {
			cout << "Vowel count: " << countVowel(input) << endl;
		}
	}
	return 0;
}

int countVowel(string str) {
	int numVowels = 0;

		//parses through the string to see if each character is a vowel
	for (int i = 0; i < str.length(); i++) {
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
			numVowels++; //if yes, adds 1 to numVowels
		}
	}

	return numVowels;
}