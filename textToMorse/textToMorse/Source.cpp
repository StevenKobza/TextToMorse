#include <iostream>
#include <string>
using namespace std;

//Author: Steven Kobza, Created on April 10th 2018
int main() {
	string morseOutput, stringInput, quit;
	cout << "Please input your string: ";
	getline(cin, stringInput);
	quit = "no";
	while (quit != "yes")
	{
		for (int i = 0; i < stringInput.length(); i++)
		{
			switch (stringInput[i])
			{
			case 'A':
			case 'a':
				morseOutput += ".-";
				break;
			case 'B':
			case 'b':
				morseOutput += "-...";
				break;
			case 'C':
			case 'c':
				morseOutput += "-.-.";
				break;
			case 'D':
			case 'd':
				morseOutput += "-..";
				break;
			case 'E':
			case 'e':
				morseOutput += ".";
				break;
			case 'F':
			case 'f':
				morseOutput += "..-.";
				break;
			case 'G':
			case 'g':
				morseOutput += "--.";
				break;
			case 'H':
			case 'h':
				morseOutput += "....";
				break;
			case 'I':
			case 'i':
				morseOutput += "..";
				break;
			case 'J':
			case 'j':
				morseOutput += ".---";
				break;
			case 'K':
			case 'k':
				morseOutput += "-.-";
				break;
			case 'L':
			case 'l':
				morseOutput += ".-..";
				break;
			case 'M':
			case 'm':
				morseOutput += "--";
				break;
			case 'N':
			case 'n':
				morseOutput += "-.";
				break;
			case 'O':
			case 'o':
				morseOutput += "---";
				break;
			case 'P':
			case 'p':
				morseOutput += ".--.";
				break;
			case 'Q':
			case 'q':
				morseOutput += "--.-";
				break;
			case 'R':
			case 'r':
				morseOutput += ".-.";
				break;
			case 'S':
			case 's':
				morseOutput += "...";
				break;
			case 'T':
			case 't':
				morseOutput += "-";
				break;
			case 'U':
			case 'u':
				morseOutput += "..-";
				break;
			case 'V':
			case 'v':
				morseOutput += "...-";
				break;
			case 'W':
			case 'w':
				morseOutput += ".--";
				break;
			case 'X':
			case 'x':
				morseOutput += "-..-";
				break;
			case 'Y':
			case 'y':
				morseOutput += "-.--";
				break;
			case 'Z':
			case 'z':
				morseOutput += "--..";
				break;
			case '0':
				morseOutput += "-----";
				break;
			case '1':
				morseOutput += ".----";
				break;
			case '2':
				morseOutput += "..---";
				break;
			case '3':
				morseOutput += "...--";
				break;
			case '4':
				morseOutput += "....-";
				break;
			case '5':
				morseOutput += ".....";
				break;
			case '6':
				morseOutput += "-....";
				break;
			case '7':
				morseOutput += "--...";
				break;
			case '8':
				morseOutput += "---..";
				break;
			case '9':
				morseOutput += "----.";
				break;
			case ' ':
				morseOutput += " ";
				break;
			}
		}
		cout << "The morse code translation of your input is: " << morseOutput << endl;
		cout << "If you would like to quit, please type 'yes' otherwise, please type any character: ";
		getline(cin, quit);
	}
	
	cout << "Thank you for looking at my program" << endl;
	system("pause");
	return 0;
}