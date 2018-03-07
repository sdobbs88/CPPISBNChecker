/**
* Class: CSCI2490 C++ Programming
* Instructor: Y. Daniel Liang
* Description: Checks an ISBN number and converts it from ISBN 12 to ISBN 13. If there is an improper
* input then an error message is given. 
* Due: 08/22/2016
* @author Shaun C. Dobbs
* @version 1.0

* I pledge by honor that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.

Sign here: Shaun C. Dobbs
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;


int main()
{
	string isbn;
	cout << "Enter the first 12 digits of an ISBN-13 as a string: " << endl;
	cin >> isbn;


	if (isbn.length() != 12) {
		cout << isbn << " is an invalid input" << endl;
	} else {
		int sum = 0;
		int dProduct; 
		int newSum;

		//Sum the digits alternating multiples of 1 and 3, 12 times
		for (unsigned int d = 0; d < 12; d++) {
			//Convert ascii isbn to actual integers for the dProduct variable
			dProduct = (isbn[d] - 48);
			if (d % 2 == 0) {
				sum += dProduct * 1;
			} else {
				sum += dProduct * 3;
			}
		}
		newSum = 10 - (sum % 10);
		if (newSum == 10) {
			cout << "The ISBN-13 number is " << isbn << "0" << endl;
		} else {
			cout << "The ISBN-13 number is " << isbn << newSum << endl;
		}
	}
    return 0;
}

