#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> code = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

char cypher(char c = 0) {

	if (c >= 65 && c <= 90)
	{
		return code[c - 65];
	}

	else if (c >= 97 && c <= 122)
	{
		char upperCaseLetter = c - 32;
		char upperCaseCode = code[upperCaseLetter - 65];
		return upperCaseCode + 32;
	}
	else
	{
		return c;
	}
}

int main() {
	string text;
	char again;

	cout << "Input Text to Cypher: ";
	getline(cin, text);

	for (char& c : text)
	{
		c = cypher(c);
	}

	cout << "Encoded Message: " << text << endl;

	cout << "" << endl;
}