#pragma once
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std; 

class Prompter {
public: 
	void getText(char* text) {
		cout << "Enter text: ";
		cin.getline(text, 256);
	}
	void getLetter(char* letter) {
		cout << "Enter a letter: ";
		cin >> letter; 
	}

	void countInstances(char * letter, char* text) {
		int length = (unsigned)strlen(text);
		for (int i = 0; i < length; i++) {
			if (text[i] == *letter) {
				cout << "Found\n";
			}
		}
	}

	void secondCountInstances(char *letter, char* text) {
		for (char* p = text; *p; p++) {
			if (*p == *letter) {
				cout << "Found 2!\n";
			}
		}
	}

};