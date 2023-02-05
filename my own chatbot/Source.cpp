#include <iostream>
#include <string>
//#include "strings.h"
#include "modules.h"
#include "JBHBOT.h"
#include <algorithm>
#include <vector>
#include<fstream>
using namespace std;


int main() {
	modules b;
	string  a;
	cout<<endl << "                                                             WELCOME TO JBHBOT" << endl << endl;
	cout << "THE CHATBOT IS DESIGNED TO ANSWER QUESTIONS RELATED TO C++ ONLY. PLEASE MAKE SURE THAT YOUR QUESTION IS BRIEF AND TO THE POINT." << endl;
	cout << "THE CHATBOT HAS TWO MODES OF OPERATION.\n1. A SIMPLE MODE THAT ONLY ANSWERS QUESTIONS\n2. SELF LEARNING MODE WITH THE ABILITY TO LEARN FROM THE USER." << endl;
	cout << "ENTER THE MODE YOU WANT TO ENTER" << endl << "TYPE SELF FOR SELF LEARNING MODE." << endl << "TYPE SIMPLE FOR SIMPLE MODE" << endl;
	getline(cin,a);
	if (a == "SELF"||a=="self") {
		b.self_learning_mode();
	}
	else {
		if (a == "SIMPLE" || a == "simple") {
			b.simple();
		}
		else {
			cout << "INVALID ENTRY" << endl;
			exit(1);
		}
	}

}