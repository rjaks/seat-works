/*
=====HONOR CODE=====
Name: Adrian L. Reforsado
Subject: CSDC102 | Intermediate Programming
Section: ZC12Am
Type (Seatwork, Quiz, or Exam): Seatwork
Date: February 28, 2024
Problem Title: Mamma Mia
Honor Code:
I solemnly affirm that the code presented herein is a product of my own intellectual efforts and creativity. I have not copied, plagiarized, or utilized unauthorized resources in its development.
I am aware of the severe consequences of academic dishonesty both within the academic institution and in professional practice.
I commit to upholding the principles of integrity, honesty, and responsibility in all my programming endeavors, recognizing the importance of ethical conduct in the pursuit of knowledge and the advancement of the technology field.
=====PROBLEM SOLVING PROCESS=====
1. What is asked? A string of text
2. What is the input format? List of strings
3. What is the expected output format? Status -- whether it is a palindrome or not 
		Note: program outputs either "YES" or "NO" depending on the status
4. What are the problem's constraints?
	-> Use C++
	-> 1 <= |S| <= 100
5. Which data structure and algorithm can we use?
	-> String Functions
	-> For Loops
	-> Conditional Statements
6. Write the algorithm's pseudocode.
	1. Start
	2. Input a list of strings
	3. Evaluate if the string fits within the constraints
		-> If the string exceeds 100 characters or single character, it skips the palindrome status check
	4. Check the palindrome status of the text
		-> If the string is a palindrome, output "YES"
		-> Else, print "NO"
	5. Continue program until terminated
		Note: Program will not stop unless terminated using ```Ctrl + C```.
*/

#include<iostream>
#include<string>
using namespace std;

void isPalindrome(string text){
	string palindrome;
	if (text.size() < 1 || text.size() > 100);
	else{
		for (int i = text.size()-1; i >= 0; i--) palindrome += text[i];
		if (palindrome == text) cout << "YES\n";
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
