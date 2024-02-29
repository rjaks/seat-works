/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 || Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Quiz
Date: February 29, 2024
Problem Title: Mamma Mia the Magical
Honor Code:
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice.
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.
=====PROBLEM SOLVING PROCESS=====
1. What is asked? 
	-> A palindrome string of text.
2. What is the input format?
	-> List of Strings
3. What is the expected output format?
	-> Converted Palindrome or "NO"
4. What are the problem's constraints?
	-> Use C++
	-> 1 <= |S| <= 100
5. Which data structure and algorithm can we use?
	-> Conditional "if" Statements
	-> For Loops
	-> String Functions
6. Write the algorithm's pseudocode.
	1. Start
	2. Ask user for a string input
	3. Check if the string meets the constraints
		-> If the string exceeds or is less than the appropriate length, it skips the text and outputs nothing
	4. Evaluate if the string is a palindrome
		-> If the string is a palindrome, it is converted to a new text following certain conditions:
			--> For every character of the palindrome, alphabets are converted to uppercase while numbers are converted to '*'.
			--> Print the converted palindrome.
		-> Else, print "NO".
	5. Continue the program unless terminated by the user.
		Note: Program can only be terminated by forced termination (using Ctrl + C or closing the compiler). 
*/

#include<iostream>
#include<string>
using namespace std;

void convert(string temp){
	string palindrome;
	for (char k : temp){
		if(isalpha(k)) palindrome += toupper(k);
		if(isspace(k)) palindrome += " ";
		if(isdigit(k)) palindrome += "*";
	}
	cout << palindrome << endl;
}

void isPalindrome(string text){
	string temp;
	if (text.size() < 1 || text.size() > 100);
	else{
		for (int i = text.size()-1; i >= 0; i--) temp += text[i];
		if (temp == text) convert(temp);
		else cout << "NO\n";
	}
}

int main(){
	string text;
	while (getline(cin, text)){
		isPalindrome(text);
	}
	return 0;
}