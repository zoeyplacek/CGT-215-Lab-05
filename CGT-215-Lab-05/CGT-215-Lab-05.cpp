// CGT-215-Lab-05.cpp

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

char translate(char c, const vector<char>& code) { // function to translate a character using the cypher table 
	if (c >= 65 && c <= 90) { // check if character is uppercase
		return code[c - 65]; // if character is uppercase, return the corresponding character from the vector
	}
	else if (c >= 97 && c <= 122) { // check if character is lowercase
		char uppercaseletter = c - 32; // converts lowercase letter to uppercase (65 - 90)
		char translated = code[uppercaseletter - 65]; // translates uppercase letter using the vector
		return translated + 32; // converts the translated uppercase letter back to lowercase (97 - 122)
	}
	else {
		return c; // if character is not a letter, return the character as inputted
	}
}

int main() { // main function

	cout << "Input text to cypher: "; // prompts user to type a message to be cyphered

	string text; // variable to hold input text
	getline(cin, text); // gets the input text from the user

	vector<char> code = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };
	// vector holding the cypher being used
	string output = ""; // variable to hold output text
	for (char c : text) { 
		output += translate(c, code);
	}
	// for each character in input text, translate it using the cypher then add it to the output text
	
	cout << "Encoded Message: " << output << endl; // outputs cypher to user
	return 0; // end of function
}
